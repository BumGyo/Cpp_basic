#include <iostream>
using namespace std;

int main() {
	int M[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

	int(*ptr)[3]; int* p; int** pt;

	ptr = M;
	// 2차원 배열의 시작 주소
	cout << ptr << " " << M << endl;
	// [1][] 단위로 한칸 이동하여 4byte x 3 = 12byte 이동
	cout << ptr + 1 << " " << M + 1 << endl;
	// 결국 이전과 똑같은 의미(M[1][0]의 주소)가 되어 4byte x 3 = 12byte 이동
	cout << *(ptr + 1) << " " << ptr[1] << " " << *(M + 1) << " " << M[1] << " " << endl;
	// M[1][0]의 결과값을 가져옴
	cout << **(ptr + 1) << **(M + 1) << *M[1] << M[1][0] << endl;

	p = M[0];
	// 2차원 배열의 시작 주소
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
