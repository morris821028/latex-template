TEX_FILE=*.tex
SPELL_CHECK_TARGETS=$(TEX_FILE)
LATEX_ENGINE=pdflatex

.PHONY: paper clean spell-check

paper: paper.tex
	$(LATEX_ENGINE) paper.tex
	$(LATEX_ENGINE) paper.tex

spell-check: $(TEX_FILE)
	aspell --mode=tex list < paper.tex

clean:
	rm -f *.aux *.log *.nav *.out *.pdf *.snm *.toc
