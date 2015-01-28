using namespace std;

class Encoder {
public:
    unsigned char * encode_frame(Frame);
};

unsigned char * Encoder::encode_frame(Frame frame) {
    return frame.get_frame_array();
}

