#include <iostream>

int main() {
	int sum = 0, i = 0;
	
	for (i = 1; i <= 10; i++)
		sum += i;

	std::cout << "1���� 10���� ���� ����� " << sum << "�Դϴ�." << std::endl;

	char c = '#';
	std::cout << c << 5.5 << '-' << "Hi";
	// ����, ����, ����, ���ڿ� ��� ��� ����

	return 0;
}