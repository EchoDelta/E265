#include "Frame.h"

Frame::Frame(unsigned char * framearray, int height, int width) : _frameArray(framearray), _width(width), _height(height) {
}

int Frame::height() {
    return _height; 
}

int Frame::width() {
    return _width; 
}

unsigned char * Frame::get_frame_array(void) {
    return _frameArray;
}