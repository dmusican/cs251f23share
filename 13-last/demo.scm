;; (define one-time-function
;;   (lambda (x)
;;     (+ x 1)))

;; (one-time-function 3)

(let ((one-time-function
       (lambda (x)
         (+ x 1))))
  (one-time-function 3))