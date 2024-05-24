#include <iostream>
using namespace std;

class Circle {
protected:
	int r;
};

class NamedCircle : public Circle {
	string name;
public:
	NamedCircle(int r, string name);
	void show();
};

NamedCircle::NamedCircle(int r, string name) {
	this->r = r;
	this->name = name;
}

void NamedCircle::show() {
	cout << "반지름이 " << this->r << "인 " << this->name;
}

int main() {
	NamedCircle waffle(3, "waffle"); // 반지름이 3이고 이름이 waffle인 원
	waffle.show();

	return 0;
}