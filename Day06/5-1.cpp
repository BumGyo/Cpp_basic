#include <iostream>
using namespace std;

class Rectangle {
public:
    int width;
    int height;

    Rectangle() {
        this->width = 0;
        this->height = 0;
    }
    
    Rectangle(int x) {
        this->width = x;
        this->height = x;
    }

    Rectangle(int x, int y) {
        this->width = x;
        this->width = y;
    }

    bool isSquare() {
        if (this->height == this->width) {
            return true;
        }
        else {
            return false;
        }
    }
};

int main() {
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3);
    if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
    if (rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
    if (rect3.isSquare()) cout << "rect3는 정사각형이다." << endl;
}