(declare (unit interface))

(module interface
    *
  (import scheme
	  (chicken base)
	  x11-backend
	  minifb-backend
	  renderer-logic)

  (define rendering-backend 'minifb)
  
  (define set-backend
    (lambda (backend)
      (cond 
        ((eq? backend 'xlib) (set! rendering-backend 'xlib))
        ((eq? backend 'minifb) (set! rendering-backend 'minifb))
        (else (set! rendering-backend 'minifb))
        )
      ))
  
  (define create-app-window
    (lambda (width heigth)
        (cond
          ((eq? rendering-backend 'xlib) (create-window width heigth))
          ((eq? rendering-backend 'minifb) (mfbb-create-window width heigth))
        )
      ))

  (define should-close-app-window?
    (lambda ()
      (cond
        ((eq? rendering-backend 'xlib) (is-app-closed?))
        ((eq? rendering-backend 'minifb) (mfbb-is-app-closed?))
      )

    ))

  (define key-up-pressed?
   	(lambda ()
   	  (cond
   	    ((eq? rendering-backend 'xlib) (xlib-key-up-pressed?))
   	    ((eq? rendering-backend 'minifb) (mfbb-is-key-up-pressed?))
   	  )))

;	(define key-down-pressed?
 ; 	(lambda ()
  ;		(xlib-key-down-pressed?)))

;	(define key-left-pressed?
 ; 	(lambda ()
  ;		(xlib-key-left-pressed?)))

;	(define key-right-pressed?
 ; 	(lambda ()
  ;		(xlib-key-right-pressed?)))
  )
