#include <iostream>

using namespace std;

int main() {
	bool isequal = true;
	char password1[100], password2[100];
	cout << "�� ��ȣ�� �Է��ϼ��� >> ";
	cin >> password1;
	cout << "�� ��ȣ�� �ٽ� �ѹ� �Է��ϼ��� >> ";
	cin >> password2;

	for (int i = 0; i < 100; i++) {
		if (password1[i] != password2[i]) {
			cout << "���� �ʽ��ϴ�.";
			isequal = false;
			break;
		}
	}
	if (isequal == true)
		cout << "�����ϴ�.";
}