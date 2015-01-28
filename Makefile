CC=g++
CFLAGS=
all: main.cpp
	$(CC) $(CFLAGS) main.cpp -o main

clean:
	rm -rf *.o main