(module ppm-backend
    (write-file)
    (import scheme
	    (chicken base)
	    (chicken io)
	    (chicken format)
	    (srfi 160 u8))
    
    (define write-file
      (lambda (fb fb-length)
	(let ((out (open-output-file "./output.ppm")))
	  (fprintf out "P6 ~A ~A 255 " fb-length fb-length)
	  (do ((i 0 (+ i 1)))
	      ((= i (u8vector-length fb)))
	    (let ((px (u8vector-ref fb i)))
	      (fprintf out "~A" (integer->char px))
	      )
	    )
	  (close-output-port out)
	  )
	))

    )
