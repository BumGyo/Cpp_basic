#include <iostream>
using namespace std;

class Book {
	string title;
	int price;
	int pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}
	string getTitle() {
		return title;
	}
	friend bool operator==(Book& op1, int x);
	friend bool operator==(Book& op1, string x);
	friend bool operator==(Book& op1, Book& op2);
};

bool operator==(Book& op1, int x) {
	if (op1.price == x)
		return true;
	else
		return false;
}

bool operator==(Book& op1, string x) {
	if (op1.title == x)
		return true;
	else
		return false;
}

bool operator==(Book& op1, Book& op2) {
	if (op1.title == op2.title)
		return true;
	else
		return false;
}


int main() {
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	// price 비교
	if (a == 30000) cout << "정가 30000원" << endl;
	// 책 title 비교
	if (a == "명품 C++") cout << "명품 C++ 입니다." << endl;
	// title, price, pages 모두 비교
	if (a == b) cout << "두 책이 같은 책입니다." << endl;

	return 0;
}