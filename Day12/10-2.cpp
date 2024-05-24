#include <iostream>
#include <string>
using namespace std;

class Circle {
protected:
	int r;
public:
	void set_radius(int r);
	int get_radius();
};

class NamedCircle : public Circle {
	string name;
public:
	void set_name(string name);
	string get_name();
};

void Circle::set_radius(int r) {
	this->r = r;
}

int Circle::get_radius() {
	return this->r;
}

void NamedCircle::set_name(string name) {
	this->name = name;
}

string NamedCircle::get_name() {
	return this->name;
}

int main() {
	NamedCircle pizza[5];
	
	cout << "5개의 정수 반지름과 원의 이름을 입력하세요." << endl;
	
	/*
	for (int i = 0; i < 5; i++) {
		int radius;
		string name;

		cout << i + 1 << " >>";
		cin >> radius;
		getline(cin >> ws, name);

		pizza[i].set_radius(radius);
		pizza[i].set_name(name);
	}*/

	for (int i = 0; i < 5; i++) {
		string input;

		cout << i + 1 << ">> ";
		getline(cin, input);

		int spaceIndex = input.find(' ');
		int radius = stoi(input.substr(0, spaceIndex));
		string name = input.substr(spaceIndex + 1);

		pizza[i].set_radius(radius);
		pizza[i].set_name(name);
	}

	int max_index = 0;
	int max = 0;

	for (int j = 0; j < 5; j++) {
		if (pizza[j].get_radius() > max) {
			max = pizza[j].get_radius();
			max_index = j;
		}
	}

	cout << "가장 면적이 큰 피자는 " << pizza[max_index].get_name() << "입니다";

	return 0;
}