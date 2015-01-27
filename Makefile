CC=g++
CFLAGS=-I/opt/X11/include -L/usr/X11/lib/ -lpng -lX11 
all: main.cpp
	$(CC) $(CFLAGS) main.cpp -o main

clean:
	rm -rf *.o main