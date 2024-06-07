#include <iostream>
using namespace std;

// 모든 타입에 작동할 수 있도록 템플릿 선언
template <class T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int& retSize) {
	int k = 0;	// 새로운 배열의 크기 변수 k
	T* p = new T[sizeSrc];	// src와 같은 크기의 배열 할당
	for (int i = 0; i < sizeSrc; i++){
		int j;
		for (j = 0; j < sizeMinus; j++) {
			if (src[i] == minus[j])
				break;
		}
		if (j == sizeMinus) { // src[i] 값이 minus 배열에 없음
			p[k] = src[i];	// 새로운 배열의 값추가
			k++;
		}
	}
	retSize = k;			// 리턴할 배열의 크기 결정
	if (k == 0) {
		delete[] p;			// 메모리 해제
		return NULL;
	}
	T* q = p;	// q가 p와 같은 배열을 가르킴

	if (sizeSrc != retSize) { // 최종 배열의 크기가 원본과 다른 경우
		q = new T[k];		// 새로 배열 할당
		for (int i = 0; i < k; i++)
			q[i] = p[i];	// 배열 복사
		delete[] p;			// 처음 할당받은 배열 반환
	}
	return q;	// 최종 배열 리턴
}

int main() {
	// remove() 함수를 int로 구체화하는경우
	cout << "정수 배열 {1,2,3,4}에서 정수 배열 {-3,5,10,1,2,3}을 뺍니다" << endl;
	
	int x[] = { 1,2,3,4 };
	int y[] = { -3,5,10,1,2,3 };
	int retSize;

	int* p = remove(x, 4, y, 6, retSize);

	if (retSize == 0) {
		cout << "모두 제거되어 리턴하는 배열이 없습니다." << endl;
		return 0;
	}
	else {
		for (int i = 0; i < retSize; i++) // 배열의 모든 원소 출력
			cout << p[i] << ' ';
		cout << endl;
		delete[] p; // 할당받은 배열 반환
	}
	// remove() 함수를 double로 구체화하는 경우
	cout << "실수 배열 {2.2, 3.3, 4.4, 5.5}에서 실수 배열{1.1, 2.2, 3.3, 4.4}를 뺍니다" << endl;

	double x1[] = { 2.2, 3.3, 4.4, 5.5 };
	double y1[] = { 1.1, 2.2, 3.3, 4.4 };
	int retSize1;

	double* p1 = remove(x1, 4, y1, 4, retSize1);

	if (retSize1 == 0) {
		cout << "모두 제거되어 리턴하는 배열이 없습니다." << endl;
		return 0;
	}
	else {
		for (int i = 0; i < retSize1; i++) // 배열의 모든 원소 출력
			cout << p1[i] << ' ';
		cout << endl;
		delete[] p1; // 할당받은 배열 반환
	}
}