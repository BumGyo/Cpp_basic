#include <iostream>

int main() {
	int sum = 0, i = 0;
	
	for (i = 1; i <= 10; i++)
		sum += i;

	std::cout << "1에서 10까지 더한 결과는 " << sum << "입니다." << std::endl;

	char c = '#';
	std::cout << c << 5.5 << '-' << "Hi";
	// 변수, 숫자, 문자, 문자열 모두 출력 가능

	return 0;
}