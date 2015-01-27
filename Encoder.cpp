using namespace std;

class Encoder {
public:
    vector<char> encode_frame(Frame);
};

vector<char> Encoder::encode_frame(Frame frame) {
    return frame.get_frame_array();
}

