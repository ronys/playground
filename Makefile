# Makefile for playground
PROG=playground

$(PROG): main.o play.o ground.o
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm *.o $(PROG)

