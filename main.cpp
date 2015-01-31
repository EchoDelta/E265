#include <fstream>
#include <iostream>
#include <cstdlib>

#include "Encoder.cpp"

using namespace std;

int main(int argc, char* argv[]){
  
  if (argc < 5) {
    cerr << "Usage: " << argv[0] << " IN_FILE(IYUV/I420)" << " WIDTH" << " HEIGHT" << " OUT_FILE" << endl;
    return 1;
  }

  int width = atoi(argv[2]);
  int height = atoi(argv[3]);

  ifstream moviefile (argv[1], ios::in | ios::binary);
  ofstream encodedfile (argv[4], ios::in | ios::binary | ios_base::app);

  Encoder encoder(width, height);

  int buffersize = height*width*3/2; //Assuming YUV 4:2:0 sampling
  unsigned char buffer_input[buffersize];
  unsigned char buffer_output[buffersize];

  while(moviefile.read((char *)buffer_input, buffersize)) {
    
    encoder.encode(buffer_input, buffer_output);

    encodedfile.write((char *)buffer_output, buffersize);
  }
  moviefile.close();
  encodedfile.close();
}