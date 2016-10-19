TEX_FILE=*.tex
SPELL_CHECK_TARGETS=$(TEX_FILE)
LATEX_ENGINE=pdflatex
SPELL_CHECK_ENGINE=/usr/local/Cellar/aspell/0.60.6.1/bin/aspell
.PHONY: paper clean spell-check

paper: main.tex
	dot -Tps2 gh.dot >gh.eps
	$(LATEX_ENGINE) main.tex
	$(LATEX_ENGINE) main.tex

spell-check: $(TEX_FILE)
	$(SPELL_CHECK_ENGINE) --mode=tex --lang=en list < main.tex

clean:
	rm gh.eps
	rm -f *.aux *.log *.nav *.out *.pdf *.snm *.toc

