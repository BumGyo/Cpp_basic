#include <iostream>
using namespace std;

int main() {
	char c[100];
	int count = 0;
	cout << "���ڵ��� �Է��϶�(100�� �̸�)." << endl;
	cin.getline(c, 100);
	for (int i = 0; i < 100; i++) {
		if (c[i] == 'x' or c[i] == 'X')
			count++;
	}
	cout << 'X' << "�� ������ " << count << endl;
}