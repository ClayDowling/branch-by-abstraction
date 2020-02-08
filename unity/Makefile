LIBRARY=libunity.a
OBJS=$(patsubst %.c, %.o, $(wildcard *.c))

.PHONY: clean virgin

$(LIBRARY): unity.c $(OBJS)
	$(AR) -rs $@ $(OBJS)

unity.c:
	./source-library.sh
	$(MAKE)
	
clean:
	rm -f $(LIBRARY)
	rm -f *.o

virgin: clean
	rm -f *.c
	rm -f *.h