#ifndef FRAME_H
#define FRAME_H

using namespace std;
class Frame {
    unsigned char* _frameArray;
    int _width, _height;
public:
    Frame(unsigned char *, int, int);
    int height(void);
    int width(void);
    unsigned char * get_frame_array(void);
};
#endif