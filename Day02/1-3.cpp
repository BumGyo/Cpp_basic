#include <iostream>
using namespace std;

double biggest(double a[], int num) {
	double max = a[0];

	for (int j = 0; j < num; j++) {
		if (a[j] > max) max = a[j];
	}
	return max;
}

int main() {
	double a[5];
	cout << "5���� �Ǽ��� �Է��϶�>> ";
	
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}

	cout << "���� ū �� = " << biggest(a, 5) << endl;
}