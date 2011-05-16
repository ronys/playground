# Makefile for playground

playground: main.o
	$(CC) $(CFLAGS) -o $@ $^

