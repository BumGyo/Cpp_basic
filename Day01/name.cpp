#include <iostream>
// <iostream> 헤더 파일을 컴파일전에 소스에 확장하도록 지시
// <iostream> 헤더 파일: 입출력을 위한 클래스와 객체, 변수 등이 선언됨

int main() {
	std::cout << "My name is Bum." << std::endl;
	// cout << 값 형식으로 출력
	// << 연산자 다음에 기본형의 변수를 지정하면 자동으로 데이터형에 맞추어 출력
	
	return 0;
	// -1, 0, 1, 2 등등 개발자들이 프로그램의 오류등의 의미로 리턴값을 씀
}