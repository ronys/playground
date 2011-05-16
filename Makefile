# Makefile for playground

playground: main.o play.o ground.o
	$(CC) $(CFLAGS) -o $@ $^

