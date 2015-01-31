#include "Encoder.h"

using namespace std;

Encoder::Encoder(int width, int height) {
  buffer_size = width * height * 3/2;
}

void Encoder::encode(unsigned char* buffer_in, unsigned char* buffer_out) {
    for(int i = 0; i<buffer_size; i++) {
      buffer_out[i] = buffer_in[i];
    }
}

