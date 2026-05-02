(module interface
    *
  (import scheme
	  (chicken base)
	  x11-backend
	  renderer-logic)

  (define create-app-window
    (lambda (width heigth)
      (create-window width heigth)
      ))

  (define should-close-app-window?
    (lambda ()
    	(is-app-closed?)))

  (define key-up-pressed?
  	(lambda ()
  		(xlib-key-up-pressed?)))

	(define key-down-pressed?
  	(lambda ()
  		(xlib-key-down-pressed?)))

	(define key-left-pressed?
  	(lambda ()
  		(xlib-key-left-pressed?)))

	(define key-right-pressed?
  	(lambda ()
  		(xlib-key-right-pressed?)))
  )
