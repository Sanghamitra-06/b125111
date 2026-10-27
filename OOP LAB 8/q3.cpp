#include <iostream>
using namespace std;
class Compressor {
public:
    virtual void compress(double fileSize) {
        cout << "Original File Size: " << fileSize << " MB" << endl;
    }
};
class TextCompressor : public Compressor {
public:
    void compress(double fileSize) override {
        double compressedSize = fileSize * 0.40;
        cout << "Text File - Original: " << fileSize << " MB, Compressed: " << compressedSize << " MB" << endl;
    }
};
class ImageCompressor : public Compressor {
public:
    void compress(double fileSize) override {
        double compressedSize = fileSize * 0.70;
        cout << "Image File - Original: " << fileSize << " MB, Compressed: " << compressedSize << " MB" << endl;
    }
};
int main() {
    TextCompressor textComp;
    ImageCompressor imgComp;

    textComp.compress(50.0);
    imgComp.compress(50.0);

    return 0;
}