SRC 		:= pyntuml.py

all: check test

.PHONY: test check

test:
	true

check:
	pylint $(SRC)
	black -t py38 -l 80 $(SRC)
	mypy $(SRC)
	flake8 $(SRC)