(module interface
    *
  (import scheme
	  (chicken base)
	  ppm-backend
	  x11-backend
	  renderer-logic)

  (define pass-buffers
    (lambda ()
      (create-window)
      ))
  )
