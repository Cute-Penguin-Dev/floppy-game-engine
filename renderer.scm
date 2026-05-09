(declare (unit renderer))

(module renderer-logic
    (load-image
     reset-fb
     draw-rectangle
     draw-image
     init-fb
     rgb-length
     rgba-length
     sync-fb-to-x11-memory
     return-fb
     return-fb-locative
     upscale-fb
     )

  (import scheme
	  (chicken base)
	  (chicken io)
	  (chicken format)
	  (only srfi-4 read-u8vector!)
	  (only srfi-4 subu8vector)
	  (only srfi-4 blob->u8vector)
	  (only srfi-13 string-trim-both)
	  (chicken file posix)
	  (chicken memory)
	  (chicken blob)
    (chicken file)
	  (srfi.160.u8)	  (chicken locative))
  
  ;; constants
  (define fb-width 0)
  (define fb-heigth 0)
  (define fb-width-no-scale 0)
  (define fb-heigth-no-scale 0)
  (define fb-scale 0)
  (define rgb-length 4)
  (define rgba-length 8)

  ;; the frame buffer it's self

  (define fb-locative '())
  
  (define fb (make-u8vector 0 0))

  (define init-fb
    (lambda (width heigth scale)
      (set! fb (make-u8vector (* width heigth rgb-length) #x00))
      (set! fb-locative (allocate (* width heigth rgb-length)))
      (set! fb-width width)
      (set! fb-heigth heigth)
      (set! fb-width-no-scale (quotient width scale))
      (set! fb-heigth-no-scale (quotient heigth scale))
      (set! fb-scale scale)
      ))
  
  (define sync-fb-to-x11-memory
    (lambda ()
      (move-memory! fb fb-locative)))
  
  ;; converts a xy pos to an rgb three byte  index of the frame buffer
  (define x-y-to-index
    (lambda (x y w)
      (* (+ (* y w) x) rgb-length)
      ))

  ;; sets a framebuffer pixel taking in BRGA BGRA BGRA eight byte args
  (define set-pixel
    (lambda (x y r g b a)

      (let* ((pixel (get-pixel-rgb fb x y fb-width))
	     (dst-red (list-ref pixel 2))
	     (dst-green (list-ref pixel 1))
	     (dst-blue (list-ref pixel 0)))
	; bgr
	; bgr
	(u8vector-set! fb (+ (x-y-to-index x y fb-width) 2) (quotient (+ (* r a) (* dst-red (- 255 a)))  255))
	(u8vector-set! fb (+ (x-y-to-index x y fb-width) 1) (quotient (+ (* g a) (* dst-green (- 255 a)))  255))
	(u8vector-set! fb (+ (x-y-to-index x y fb-width) 0) (quotient (+ (* b a) (* dst-blue (- 255 a)))  255))
    	)
  ))

  ;; gets a pixel from an rgb frame buffer
  (define get-pixel-rgb
    (lambda (pixels x y w)
      (list
       (u8vector-ref pixels (+ (x-y-to-index x y w) 0))
       (u8vector-ref pixels (+ (x-y-to-index x y w) 1))
       (u8vector-ref pixels (+ (x-y-to-index x y w) 2))
       )
      ))


  ;; gets a pixel from an rgba frame buffer
  (define get-pixel-rgba
    (lambda (pixels x y w)
      (list
       (u8vector-ref pixels (* (+ (* y w) x) rgba-length))
       (u8vector-ref pixels (+ (* (+ (* y w) x) rgba-length) 2))
       (u8vector-ref pixels (+ (* (+ (* y w) x) rgba-length) 4))
       (u8vector-ref pixels (+ (* (+ (* y w) x) rgba-length) 6))
       )
      ))

  ;; draws a rectangle
  (define draw-rectangle
    (lambda (xpos ypos w h r g b a)
      (do ((y ypos (+ y 1)))
				  ((= y (+ ypos h)))
						(do ((x xpos (+ x 1)))
	  			  ((= x (+ xpos w)))
						  (set-pixel x y r g b a)
	  )
	)
  ))

  ;; clears the frame buffer
  (define reset-fb
    (lambda ()
      (u8vector-fill! fb #x00)
      ))

  ;; loads a farbfield image from a file path
  (define load-image
    (lambda (file-name)
      (let* ((input-port (open-input-file file-name))
	     (image-fb (make-u8vector (file-size (port->fileno input-port)))))
	(read-u8vector! #f image-fb input-port)
	(set! image-fb (parse-image-header image-fb))
	(close-input-port input-port)
	image-fb
	)
  ))

  ;; parses the farbfield image header
  (define parse-image-header
    (lambda (image-with-header)
      (let ((width-acc 0) (heigth-acc 0))
	(do ((byte-index 8 (+ byte-index 1))
	     (expt-power 3 (- expt-power 1))
	     )
	    ((= byte-index 12))
	  (set! width-acc (+ width-acc (* (expt 256 expt-power) (u8vector-ref image-with-header byte-index))))
	  )

	(do ((byte-index 12 (+ byte-index 1))
	     (expt-power 3 (- expt-power 1))
	     )
	    ((= byte-index 16))
	  (set! heigth-acc (+ heigth-acc (* (expt 256 expt-power) (u8vector-ref image-with-header byte-index))))
	  )

	(list
	 (subu8vector image-with-header 16 (u8vector-length image-with-header))
	 width-acc
	 heigth-acc
	 )
	)
      ))

  ;; mk width and height correct
  (define draw-image
    (lambda (image xpos ypos)
      (let
	  ((image-data (list-ref image 0))
	   (image-width (list-ref image 1))
	   (image-heigth (list-ref image 2)))
	
	(do ((y ypos (+ y 1)))
	    ((= y (+ ypos image-heigth)))
	  (do ((x xpos (+ x 1)))
	      ((= x (+ xpos image-width)))
	    (let ((pixel (get-pixel-rgba image-data (- x xpos) (- y ypos) image-width)))
	      (set-pixel x y
			 (list-ref pixel 0)
			 (list-ref pixel 1)
			 (list-ref pixel 2)
			 (list-ref pixel 3)
	      )
	    )
	  )
	)
  )))


  ;; upscales fb. was a nightmare to write
  (define upscale-fb
    (lambda ()
	    ;; fb-image-buffer is the acuall downscaled image in the fb
	    ;; src-offset how many bytes 
	    ;; fb-upscaled-row-buffer is the upscaled row
			(let ((fb-image-buffer (make-u8vector (* fb-width-no-scale fb-heigth-no-scale rgb-length)))
			      (src-offset 0)
			      (dest-offset 0)
			      (fb-upscaled-row-buffer (make-u8vector (* fb-width rgb-length))))

			  ;; moves the important data from the fb into a seperate temp buffer to avoid being overwritten
				(do ((y 0 (+ y 1)))
						((= y fb-heigth-no-scale))
							(set! src-offset (* y fb-width rgb-length)  )
							(set! dest-offset (* y fb-heigth-no-scale rgb-length)  )
							(move-memory! fb fb-image-buffer (* fb-width-no-scale rgb-length) src-offset dest-offset)
				)

				;; x is logical and so is y
				(do ((y 0 (+ y 1)))
						((= y fb-heigth-no-scale))
							(do ((x 0 (+ x 1)))
									((= x fb-width-no-scale))
										(let ((pixel-color '()))
											(set! pixel-color (get-pixel-rgb fb-image-buffer x y fb-width-no-scale))
													(do ((i 0 (+ i 1))) 
															((= i fb-scale))
															(u8vector-set! fb-upscaled-row-buffer ( + (* (+ (* x fb-scale) i) rgb-length) 0) (list-ref pixel-color 0))
															(u8vector-set! fb-upscaled-row-buffer ( + (* (+ (* x fb-scale) i) rgb-length) 1) (list-ref pixel-color 1))
															(u8vector-set! fb-upscaled-row-buffer ( + (* (+ (* x fb-scale) i) rgb-length) 2) (list-ref pixel-color 2))
													))
										
										)

							(do ((i 0 (+ i 1)))
									((= i fb-scale))
										(set! src-offset 0)
										(set! dest-offset (* (+ (* y fb-scale) i)  fb-width rgb-length))
										(move-memory! fb-upscaled-row-buffer fb (* fb-width rgb-length) src-offset dest-offset)


								)
							)
				)
			)
  )

  (define return-fb
    (lambda ()
      fb))

  (define return-fb-locative
    (lambda ()
      fb-locative))
  
  )
