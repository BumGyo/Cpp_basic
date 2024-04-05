#include <iostream>
#include <string>
using namespace std;

int main() {
	string name[5];
	string result;

	for (int i = 0; i < 5; i++) {
		cout << "이름 >> ";
		getline(cin, name[i]);
	}

	result = name[0];

	for (int i = 1; i < 5; i++) {
		// cout << name[i] << endl;
		if (name[i] < name[i - 1]) {
			result = name[i - 1];
		}
	}

	cout << "사전에서 가장뒤에 나오는 문자열은 " << result;

	return 0;
}