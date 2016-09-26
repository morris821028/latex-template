TEX_FILE=*.tex
SPELL_CHECK_TARGETS=$(TEX_FILE)
LATEX_ENGINE=xelatex
SPELL_CHECK_ENGINE=/usr/local/Cellar/aspell/0.60.6.1/bin/aspell
.PHONY: paper clean spell-check

paper: resume.tex
	$(LATEX_ENGINE) resume.tex
	$(LATEX_ENGINE) resume.tex

spell-check: $(TEX_FILE)
	$(SPELL_CHECK_ENGINE) --mode=tex --lang=en list < paper.tex

clean:
	rm -f *.aux *.log *.nav *.out *.pdf *.snm *.toc
