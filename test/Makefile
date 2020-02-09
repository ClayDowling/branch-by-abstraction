PROGRAM=bba-test
OBJS=$(patsubst %.c, %.o, $(wildcard *.c))

CFLAGS=-I../unity -I../src -I../library1
LIBS=-L../unity -lunity -L../library1 -lrary1

all: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): $(OBJS)
	$(CC) -o $@ $^ $(LIBS)

clean:
	rm -f $(PROGRAM)
	rm -f *.o