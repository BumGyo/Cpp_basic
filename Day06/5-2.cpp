#include <iostream>
using namespace std;

class Oval {
public:
    int width;
    int height;
    
    Oval() {
        this->width = 0;
        this->height = 0;
    }

    Oval(int x, int y) {
        this->width = x;
        this->height = y;
    }

    int getWidth() {
        return this->width;
    }

    int getHeight() {
        return this->height;
    }

    void set(int w, int h) {
        this->width = w;
        this->height = h;
    }

    void show() {
        cout << "width = " << this->width << ", height = " << this->height << endl;
    }

    ~Oval() {
        cout << "Oval 소멸 : width = " << this->width << ", height = " << this->height << endl;
    }
};

int main() {
    Oval a, b(3, 4);
    a.set(10, 20);
    a.show();
    cout << b.getWidth() << ", " << b.getHeight() << endl;
}