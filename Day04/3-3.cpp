#include <iostream>
using namespace std;

//���׸� �Լ� add()
template <class T>

double add(T *a, int size) {
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += a[i];
	}
	return sum;
}

int main() {
	int x[] = { 1,2,3,4,5 };
	double d[] = { 1.2, 2.3, 3.4, 4.5, 5.6, 6.7 };
	cout << "sum of x[] = " << add(x, 5) << endl; // �迭 x�� ���� 5���� ���� ���
	cout << "sum of d[] = " << add(d, 6) << endl; // �迭 d�� ���� 6���� ���� ���
}