(module x11-backend *
  (import scheme
	  (srfi 160 u8)
          (chicken base)
	  (chicken locative)
	  (chicken format)
	  (chicken io)
	  (renderer-logic)
	  (srfi-18)
	  (chicken bitwise)
          xlib)

  (define should-close #f)
	(define xlib-display '())
	(define keyboard-state (make-vector 256 #f))
  (define is-mapped #f)
  (define close-app
    (lambda ()
      (set! should-close #t)))
  (define create-window
    (lambda (width heigth)
      (thread-start! (lambda ()
				(set! xlib-display (xopendisplay #f))
    		(let* ((black (xblackpixel xlib-display (xdefaultscreen xlib-display)))
					(white (xwhitepixel xlib-display (xdefaultscreen xlib-display)))
					(window (xcreatesimplewindow xlib-display (xdefaultrootwindow xlib-display) 0 0 width heigth 0 black white))
					(graphics-context (xcreategc xlib-display window 0 #f))
					(xeventslot (make-xevent))
					(ximageslot (xcreateimage
						     xlib-display
						     (xdefaultvisual xlib-display (xdefaultscreen xlib-display))
						     24
						     ZPIXMAP
						     0
						     (return-fb-locative) ;fix
						     width
						     heigth
						     32
						     0)))

				   (xsetforeground xlib-display graphics-context black)
				   (set! should-close #f)
				   (xselectinput xlib-display window (bitwise-ior STRUCTURENOTIFYMASK KEYPRESSMASK KEYRELEASEMASK))
				   (xmapwindow xlib-display window)
				   
				   (let event-loop ()
				     (if (not should-close)
					 (begin

					   (let fetch-events-loop ()
					     (if (> (xpending xlib-display) 0)
						 (begin (xnextevent xlib-display xeventslot)
							(cond
							 ((= (xanyevent-type xeventslot) MAPNOTIFY)
							  (set! is-mapped #t))
							 ((= (xanyevent-type xeventslot) KEYPRESS)
							 	(vector-set! keyboard-state (xkeypressedevent-keycode xeventslot) #t))
							 ((= (xanyevent-type xeventslot) KEYRELEASE)
							 	(vector-set! keyboard-state (xkeyreleasedevent-keycode xeventslot) #f))

							 )
							(fetch-events-loop))
						 ))
					   
					   (if is-mapped
					       (begin
						 (xputimage xlib-display
							    window graphics-context
							    ximageslot
							    0
							    0
							    0
							    0
							    width
							    heigth
							    )))
					   (xsync xlib-display 0)
					   (thread-yield!)
					   (event-loop)
					   )
					 (begin
					   (xclosedisplay xlib-display))))
				   
				   )))
      ))

			(define xlib-key-up-pressed?
				(lambda ()
					(vector-ref keyboard-state (char->integer (xkeysymtokeycode xlib-display XK_UP)))))

			(define xlib-key-down-pressed?
				(lambda ()
					(vector-ref keyboard-state (char->integer (xkeysymtokeycode xlib-display XK_DOWN)))))

			(define xlib-key-left-pressed?
				(lambda ()
					(vector-ref keyboard-state (char->integer (xkeysymtokeycode xlib-display XK_LEFT)))))

			(define xlib-key-right-pressed?
				(lambda ()
					(vector-ref keyboard-state (char->integer (xkeysymtokeycode xlib-display XK_RIGHT)))))
      
      (define is-app-closed?
        (lambda ()
          should-close
          ))

	)

