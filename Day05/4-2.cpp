#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<string> names;
	string result;

	for (int i = 0; i < 5; i++) {
		string name;
		cout << i + 1 <<">>";
		cin >> name;
		names.push_back(name);
	}

	result = names[0];

	for (int i = 1; i < 5; i++) {
		if (names[i] < names[i - 1]) {
			result = names[i - 1];
		}
	}
	
	cout << "사전에서 가장뒤에 나오는 이름은 " << result;

	return 0;
}