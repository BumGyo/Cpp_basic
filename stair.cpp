#include <iostream>

int main() {
	int i, j = 0;

	for (i = 1; i <= 4; i++) {
		for (j = 1; j <= i; j++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	return 0;
}