(import (chicken process-context))
(define load-project
  (lambda ()
    (load "renderer.scm")
    (load "x11-backend.scm")
    (load "interface.scm")
    (load "main.scm")))
