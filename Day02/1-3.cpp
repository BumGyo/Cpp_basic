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
	cout << "5개의 실수를 입력하라>> ";
	
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}

	cout << "제일 큰 수 = " << biggest(a, 5) << endl;
}