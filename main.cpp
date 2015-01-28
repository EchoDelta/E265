#include <fstream>
#include <iostream>
#include <cstdlib>

#include "Frame.cpp"
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

  Encoder encoder;

  int buffersize = height*width*3/2; //Assuming YUV 4:2:0 sampling
  unsigned char buffer[buffersize];

  while(moviefile.read((char *)buffer, buffersize)) {
    Frame frame(buffer, width, height);
    encodedfile.write((char *)encoder.encode_frame(frame), buffersize);
  }
  moviefile.close();
  encodedfile.close();
}