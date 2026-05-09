(declare (unit minifb-backend))

(module minifb-backend
    (mfbb-create-window
    mfbb-is-app-closed?
    mfbb-is-key-up-pressed?)
    (import scheme renderer-logic srfi-18 (chicken base) (chicken foreign))

    (foreign-declare "#include \"include/MiniFB.h\"")
    (define mfb-open (foreign-lambda (c-pointer (struct "mfb_window")) "mfb_open" c-string unsigned-int unsigned-int))
    (define mfb-update (foreign-lambda (enum "mfb_update_state") "mfb_update" (c-pointer (struct "mfb_window")) (c-pointer void)))
    (define mfb-wait-sync (foreign-lambda void "mfb_wait_sync" (c-pointer (struct "mfb_window"))))
    (define mfb-get-key-buffer (foreign-lambda (c-pointer (struct "mfb_window")) "mfb_get_key_buffer" (c-pointer u8)))

    (define is-app-closed #f)
    (define mfbb-is-app-closed?
      (lambda ()
        is-app-closed
      ))

    (define window '())
    
    (define mfbb-is-key-up-pressed?
      (lambda ()
        (if (= (pointer-u8-ref (pointer+ (mfb-get-key-buffer window) 265)) 1) #t #f)
      ))
        
    (define mfbb-create-window
      (lambda (width heigth)
        (thread-start! 
         (lambda ()
           (set! window (mfb-open " " width heigth))
           (letrec  ((update-state 0)  
                    (draw-loop (lambda ()
                                 (set! update-state (mfb-update window (return-fb-locative)))
                                 (if (= update-state 0) 
                                     (begin
                                       (mfb-wait-sync window)
                                       (thread-yield!)
                                       (draw-loop)) 
                                     (set! is-app-closed #t)))))
             (draw-loop))))))
)
