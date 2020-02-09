PROGRAM=bba
OBJS=$(patsubst %.c, %.o, $(wildcard *.c))

CFLAGS=-I../library1
LIBS=-L../library1 -lrary1

all: $(PROGRAM)

$(PROGRAM): $(OBJS)
	$(CC) -o $@ $^ $(LIBS)

clean:
	rm -f $(PROGRAM)
	rm -f *.o