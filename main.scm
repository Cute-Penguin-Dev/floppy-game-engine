(import (chicken io)
	(chicken format)
	(only srfi-4 read-u8vector!)
	(only srfi-4 subu8vector)
	(only srfi-13 string-trim-both)
	(chicken file posix)
        (chicken file)
	(srfi 160 u8)
	srfi-18
	renderer-logic
	interface)

;; a nice wrapper function to wrap all the functions nicely
(define update-image
  (lambda ()
    (thread-start! (lambda ()
		     (init-fb 512 512 8)
		     (reset-fb)
		     (create-app-window 512 512)
		     (let ((image (load-image "image.ff")))
						(let draw-loop ((color 245))
				     	 (if (not (should-close-app-window?))
				     	   (begin 
									 (if (= color 255) (set! color 0))
				    		   (reset-fb)
				  	    	 (draw-rectangle 0 0 32 32 (inexact->exact (round color)) 0 0 255)
				  	    	 (draw-image image 0 0)
				  	    	 (upscale-fb)
						       (sync-fb-to-x11-memory)
						       (thread-yield!)
						       (draw-loop (+ 0.5 color))
				     	   )
				       )
				     )
		     ))
    )))
;; fix threads
