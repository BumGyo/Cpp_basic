#include <iostream>
int sum(int, int);

int main() {
	int n = 0;

	std::cout << "�� ���� �Է��ϼ���>> ";
	std::cin >> n;
	if (n <= 0) {
		std::cout << "����� �Է��ϼ���";
		return 0;
	}
	std::cout << "1���� " << n << "������ ���� " << sum(1, n) << "�Դϴ�.";
	return 0;
}

int sum(int a, int b) {
	int res = 0, k = 0;

	for (k = a; k <= b; k++) {
		res += k;
	}

	return res;
}