(define gen-lazy-list
  (lambda (start stop)
    (if (> start stop)
        #f
        (cons start
              (lambda ()
                (gen-lazy-list
                 (+ start 1)
                 stop))))))

(define mylist (gen-lazy-list 1 3))