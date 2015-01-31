#ifndef ENCODER_H
#define ENCODER_H

class Encoder {
  int buffer_size;
public:
  Encoder(int, int);
  void encode(unsigned char*, unsigned char*);
};
#endif