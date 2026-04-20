(module sdl2-backend
    (init-backend
     render-frame)
  
  (import scheme 
          (chicken base)
          (chicken type)
	  (chicken memory)
          sdl2
          srfi-1)

  (define *renderer* #f)
  (define *texture* #f)

  ;; Helper to drain the SDL event queue into a Scheme list
  (define (get-all-events)
    (let loop ((events '()))
      (let ((ev (poll-event!)))
        (if ev
            (loop (cons ev events))
            events))))

  ;; Initializes the window and the hardware-accelerated renderer
  (define (init-backend title width height draw-proc)
    (init! '(video))
    ;; Creating window and renderer. 512x512 is your display size.
    (let*-values (((win ren) (create-window-and-renderer! 128 128 '())))
      (set! *renderer* ren)
      
      ;; create-texture* is used for manual management. 
      ;; 'rgba8888 is 4 bytes per pixel.
      (set! *texture* (create-texture* ren 'rgba8888 'streaming width height))
      
      (let loop ()
        (pump-events!)
        (let ((events (get-all-events)))
          ;; 1. Execute the drawing logic from interface.scm
          (draw-proc) 
          
          ;; 2. Flip the backbuffer to the screen
          (render-present! ren)
          
          ;; 3. Handle exit events (X button or any key)
          (unless (any (lambda (e) 
                         (let ((type (event-type e)))
                           (or (eq? type 'quit) 
                               (eq? type 'key-down)))) 
                       events)
            (loop))))
      
      ;; Cleanup
      (destroy-texture! *texture*)
      (destroy-renderer! ren)
      (destroy-window! win)
      (quit!)))

  (define (render-frame width height fb)
    ;; object->pointer gets the raw memory address of your u8vector
    ;; so update-texture-raw! can shove it into the GPU
    (update-texture-raw! *texture* #f (object->pointer fb) (* width 4))
    (render-copy! *renderer* *texture* #f #f))
)
