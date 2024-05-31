#include <iostream>
using namespace std;

class Shape {
protected:
	string name;
	int x, y;

public:
	string getName() {
		return this->name;
	}
	virtual double getArea() = 0;
};

class Oval : public Shape {
public:
	Oval(string name, int x, int y) {
		this->name = name;
		this->x = x;
		this->y = y;
	}
	double getArea() {
		return x * y * 3.14;
	}
};

class Rect : public Shape {
public:
	Rect(string name, int x, int y) {
		this->name = name;
		this->x = x;
		this->y = y;
	}
	double getArea() {
		return x * y;
	}
};

class Triangular : public Shape {
public:
	Triangular(string name, int x, int y) {
		this->name = name;
		this->x = x;
		this->y = y;
	}
	double getArea() {
		return x * y / 2;
	}
};

int main() {
	Shape* p[3];

	// 부모 클래스 생성자가 실행되고 자식 클래스 생성자가 실행됨
	p[0] = new Oval("빈대떡", 10, 20);
	p[1] = new Rect("찰떡", 30, 40);
	p[2] = new Triangular("토스트", 30, 40);

	for (int i = 0; i < 3; i++)
		cout << p[i] -> getName() << " 넓이는 " << p[i] -> getArea() << endl;
	
	// virtual일 경우 자식 클래스 소멸자가 실행되고 부모 클래스 소멸자가 실행됨
	// virtual이 아닐 경우 부모 클래스 소멸자만 실행됨(중요)
	for (int i = 0; i < 3; i++) delete p[i];

	return 0;
}