#include <iostream>

using namespace std;

int main() {
	bool isequal = true;
	char password1[100], password2[100];
	cout << "새 암호를 입력하세요 >> ";
	cin >> password1;
	cout << "새 암호를 다시 한번 입력하세요 >> ";
	cin >> password2;

	for (int i = 0; i < 100; i++) {
		if (password1[i] != password2[i]) {
			cout << "같지 않습니다.";
			isequal = false;
			break;
		}
	}
	if (isequal == true)
		cout << "같습니다.";
}