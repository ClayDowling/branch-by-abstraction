.PHONY: all clean unity src test library1

all: src

library1:
	$(MAKE) -C library1

unity:
	$(MAKE) -C unity

src: test
	$(MAKE) -C src

test: unity library1
	$(MAKE) -C test

clean:
	$(MAKE) -C library1 clean
	$(MAKE) -C unity clean
	$(MAKE) -C src clean
	$(MAKE) -C test clean

virgin: clean
	$(MAKE) -C unity virgin
