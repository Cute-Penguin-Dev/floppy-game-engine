(module x11-backend *
  (import scheme
	  (srfi 160 u8)
          (chicken base)
	  (chicken locative)
	  (chicken format)
	  (chicken io)
	  (renderer-logic)
	  (srfi-18)
          xlib)

  (define should-close #f)

  (define is-mapped #f)
  (define close-app
    (lambda ()
      (set! should-close #t)))
  (define create-window
    (lambda (width heigth)
      (thread-start! (lambda ()  (let* ((display (xopendisplay #f))
					(black (xblackpixel display (xdefaultscreen display)))
					(white (xwhitepixel display (xdefaultscreen display)))
					(window (xcreatesimplewindow display (xdefaultrootwindow display) 0 0 width heigth 0 black white))
					(graphics-context (xcreategc display window 0 #f))
					(xeventslot (make-xevent))
					(ximageslot (xcreateimage
						     display
						     (xdefaultvisual display (xdefaultscreen display))
						     24
						     ZPIXMAP
						     0
						     (return-fb-locative) ;fix
						     width
						     heigth
						     32
						     0)))

				   (xsetforeground display graphics-context black)
				   (set! should-close #f)
				   (xselectinput display window STRUCTURENOTIFYMASK)
				   (xmapwindow display window)
				   
				   (let event-loop ()
				     (if (not should-close)
					 (begin

					   (let fetch-events-loop ()
					     (if (> (xpending display) 0)
						 (begin (xnextevent display xeventslot)
							(cond
							 ((= (xanyevent-type xeventslot) MAPNOTIFY)
							  (set! is-mapped #t))
							 )
							(fetch-events-loop))
						 ))
					   
					   (if is-mapped
					       (begin
						 (xputimage display
							    window graphics-context
							    ximageslot
							    0
							    0
							    0
							    0
							    width
							    heigth
							    )))
					   (xsync display 0)
					   (thread-sleep! 0.01)
					   (event-loop)
					   )
					 (begin
					   (xclosedisplay display))))
				   
				   )))
      ))
      
      (define is-app-closed?
        (lambda ()
          should-close
          ))

	)

