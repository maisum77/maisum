#include <iostream>
#include <string>
using namespace std;
class Image {
public:
    virtual void load() = 0;
    virtual void display() = 0;
    virtual ~Image() {}
};

class JPEGImage : public Image {
public:
    void load() override {
        cout << "Loading JPEG image using specific JPEG decompression algorithms." << std::endl;
    }

    void display() override {
        cout << "Displaying JPEG image on screen with optimized rendering for JPEGs." << std::endl;
    }
};

class PNGImage : public Image {
public:
    void load() override {
        cout << "Loading PNG image using zlib decompression and filtering algorithms." << std::endl;
    }

    void display() override {
        cout << "Displaying PNG image, handling transparency if present." << std::endl;
    }
};

class BMPImage : public Image {
public:
    void load() override {
        cout << "Loading BMP image directly from uncompressed pixel data." << std::endl;
    }

    void display() override {
        cout << "Displaying BMP image with straightforward pixel mapping." << std::endl;
    }
};

void processImage(Image* img) {
    cout << "\n--- Processing an image ---" << std::endl;
    img->load();
    img->display();
    cout << "--- Image processing complete ---" << std::endl;
}

int main() {
    JPEGImage jpegImg;
    PNGImage pngImg;
    BMPImage bmpImg;

    processImage(&jpegImg);
    processImage(&pngImg);
    processImage(&bmpImg);

    Image* myImage = new JPEGImage();
    myImage->load();
    myImage->display();


    return 0;
}
