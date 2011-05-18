# Makefile for playground
PROG=playground

$(PROG): main.o play.o ground.o jack.o
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm *.o $(PROG)

