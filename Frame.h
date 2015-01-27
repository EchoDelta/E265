#ifndef FRAME_H
#define FRAME_H
#include <vector>

using namespace std;
class Frame {
    int _height, _width;
    vector<char> _frameArray;
public:
    Frame(int, int, vector<char>);
    int height(void);
    int width(void);
    char get_pixel(int, int, int);
    vector<char> get_frame_array(void);
};
#endif