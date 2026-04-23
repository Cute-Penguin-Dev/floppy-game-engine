(module interface
    *
  (import scheme
	  (chicken base)
	  ppm-backend
	  x11-backend
	  renderer-logic)

  (define create-app-window
    (lambda (width heigth)
      (create-window width heigth)
      ))
  )
