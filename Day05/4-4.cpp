#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	string find_s;
	string replace_s;

	cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다." << endl;
	getline(cin, s, '&');
	cin.ignore();

	cout << "find: ";
	getline(cin, find_s);

	cout << "replace: ";
	getline(cin, replace_s);

	// 부호가 없는 long 자료형
	size_t pos = 0;

	while (1) {
		pos = s.find(find_s, pos);
		if (pos == string::npos) {
			break;
		}
		s.replace(pos, find_s.length(), replace_s);
		pos += replace_s.length();
	}

	cout << s << endl;

	return 0;
}