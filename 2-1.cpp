#include <iostream>
using namespace std;

int main() {
	int M[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

	int(*ptr)[3]; int* p; int** pt;

	ptr = M;
	// 2���� �迭�� ���� �ּ�
	cout << ptr << " " << M << endl;
	// [1][] ������ ��ĭ �̵��Ͽ� 4byte x 3 = 12byte �̵�
	cout << ptr + 1 << " " << M + 1 << endl;
	// �ᱹ ������ �Ȱ��� �ǹ�(M[1][0]�� �ּ�)�� �Ǿ� 4byte x 3 = 12byte �̵�
	cout << *(ptr + 1) << " " << ptr[1] << " " << *(M + 1) << " " << M[1] << " " << endl;
	// M[1][0]�� ������� ������
	cout << **(ptr + 1) << **(M + 1) << *M[1] << M[1][0] << endl;

	p = M[0];
	// 2���� �迭�� ���� �ּ�
	cout << p << " " << M[0] << " " << *M << " " << endl;
	// 
	cout << p + 1 << " " << M[0] + 1 << " " << *M + 1 << " " << endl;
	cout << *(p + 1) << *(M[0] + 1) << *(*M + 1) << endl;

	pt = &p; // pt = M; (X)
	cout << *pt << p << endl;
	cout << **pt << *p << endl;
	//mywjsalstjd@naver.com

	return 0;
}
