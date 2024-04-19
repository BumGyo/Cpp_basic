#include <iostream>
#include "Ram.h"
using namespace std;

Ram::Ram() {
	size = 100 * 1024;
	for(int i = 0; i < size; i++)
		mem[i] = 0;
}

char Ram::read(int address) {
	if (address < 0 || address >= size) {
		cout << "범위를 벗어남" << endl;
		return -1;
	}
	return mem[address];
}

void Ram::write(int address, char value) {
	if (address < 0 || address >= size) {
		cout << "범위를 벗어남" << endl;
	}
	mem[address] = value;
}

Ram::~Ram() {
	cout << "메모리 제거됨";
}