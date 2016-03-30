(defun publish-org-to-html ()
  "publish the required orgmode files to html"
  (interactive)
  ;(find-file (format "%sindex.org" default-directory))
  (find-file "index.org")
  (org-html-export-to-html)
  (find-file "main.org")
  (org-html-export-to-html)
  (find-file "resources.org")
  (org-html-export-to-html)
)

(publish-org-to-html)
