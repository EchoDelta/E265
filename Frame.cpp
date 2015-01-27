#include "Frame.h"

Frame::Frame(int height, int width, vector<char> framearray) : _height(height), _width(width), _frameArray(framearray) {
}

int Frame::height() {
    return _height; 
}

int Frame::width() {
    return _width; 
}

char Frame::get_pixel(int x, int y, int c) {
    return _frameArray[x + y*(long)_width + c*(long)_width*_height];
}
vector<char> Frame::get_frame_array(void) {
    return _frameArray;
}