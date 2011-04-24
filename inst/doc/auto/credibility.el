(TeX-add-style-hook "credibility"
 (lambda ()
    (LaTeX-add-labels
     "sec:introduction")
    (TeX-add-symbols
     '("code" 1)
     '("pkg" 1)
     '("proglang" 1)
     '("E" 1)
     "pt")
    (TeX-run-style-hooks
     "Sweave"
     "noae"
     "paralist"
     "mathpazo"
     "sc"
     "helvet"
     "babel"
     "english"
     "natbib"
     "round"
     "hyperref"
     "color"
     "amsmath"
     "inputenc"
     "utf8"
     "fontenc"
     "T1"
     "latex2e"
     "art10"
     "article")))

