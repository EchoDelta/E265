CC=g++
CFLAGS=

all: encoder decoder
encoder:
	$(CC) $(CFLAGS) src/main_encoder.cpp -o encoder

decoder:
	$(CC) $(CFLAGS) src/main_decoder.cpp -o decoder	

clean:
	rm -rf *.o encoder decoder