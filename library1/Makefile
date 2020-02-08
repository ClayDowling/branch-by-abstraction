LIBRARY=library1.a

.PHONY: clean

$(LIBRARY): library1.o
	$(AR) -rs $@ $^

clean:
	rm -f $(LIBRARY)
	rm -f *.o