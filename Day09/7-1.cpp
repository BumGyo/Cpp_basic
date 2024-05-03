#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius);
	double getArea(); 
};

void Circle::setRadius(int radius) {
	this->radius = radius;
}

double Circle::getArea() {
	return 3.14 * this->radius * this->radius;
}

int main() {
	Circle circleArray[3];
	int count = 0;

	for (int i = 0; i < 3; i++) {
		int rad = 0;
		cout << "원" <<  i+1 << "의 반지름 >> ";
		cin >> rad;
		circleArray[i].setRadius(rad);
		if (circleArray[i].getArea() > 100) {
			count++;
		}
	}

	cout << "면적이 100보다 큰 원 " << count << "개입니다.";

	return 0;
}