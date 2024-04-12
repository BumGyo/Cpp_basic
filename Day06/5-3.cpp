#include <iostream>
using namespace std;

class MyVector {
	int* mem;
	int size;
public:
	MyVector(int n = 100, int val = 0);
	void PrintMem() {
		for (int i = 0; i < size; i++) {
			cout << this->mem[i] << " ";
		}
	}
	~MyVector() { delete[] mem; }
};

MyVector::MyVector(int n, int val){
	mem = new int[n];
	size = n;
	for (int i = 0; i < size; i++) mem[i] = val;
}

int main() {
	MyVector a;
	a.PrintMem();

	return 0;
}