#include <iostream>
using namespace std;

void reverseArray(int *a, int size) {
	int tmp = 0;

	for (int i = 0; i < size / 2; i++) {
		tmp = a[i];
		a[i] = a[size - i - 1];		// �� �� NULL �� �����ϱ�
		a[size - i - 1] = tmp;
	}
}

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++)
		cout << x[i] << ' '; // 4 5 100 10 1 �� ��µȴ�.
	cout << endl;
}