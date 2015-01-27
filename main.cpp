#include <fstream>

#include "CImg.h"
#include "Frame.cpp"
#include "Encoder.cpp"

#define cimg_use_png

using namespace cimg_library;
using namespace std;
int main(){
  CImg<char> imgpng("img.png");
  int height = imgpng.height();
  int width = imgpng.width();
  Frame frame (height, width, vector<char>(imgpng.data(), imgpng.data() + height*width*3));
  Encoder encoder;
  vector<char> encodedFrame = encoder.encode_frame(frame);
  {
    ofstream encodedfile("encodedFrame.e265", ofstream::binary);
    encodedfile.write(&encodedFrame[0], encodedFrame.size());
  }

}