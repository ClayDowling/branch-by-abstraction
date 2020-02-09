LIBRARY=libunity.a
OBJS=$(patsubst %.c, %.o, $(wildcard *.c))
LIBOBJS=unity.o unity_fixture.o unity_memory.o

.PHONY: clean virgin

$(LIBRARY): unity.c $(LIBOBJS)
	$(AR) -rs $@ $(LIBOBJS)

unity.c:
	./source-library.sh
	$(MAKE)
	
clean:
	rm -f $(LIBRARY)
	rm -f *.o

virgin: clean
	rm -f *.c
	rm -f *.h