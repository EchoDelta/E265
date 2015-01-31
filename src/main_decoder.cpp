#include <fstream>
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]){
  
  if (argc < 3) {
    cerr << "Usage: " << argv[0] << " IN_FILE(.e265)" << " OUT_FILE(.yuv)" << endl;
    return 1;
  }

  ifstream encodedfile (argv[1], ios::in | ios::binary);
  ofstream decodedfile (argv[2], ios::in | ios::binary | ios_base::app);

  int buffersize = 10000; //Assuming YUV 4:2:0 sampling
  unsigned char buffer[buffersize];

  while(encodedfile.read((char *)buffer, buffersize)) {
    decodedfile.write((char *)buffer, buffersize);
  }
  encodedfile.close();
  decodedfile.close();
}