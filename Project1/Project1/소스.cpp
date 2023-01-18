#include <iostream>//전처리 지시자
/*
c++에서 함수를 사용하려면 그함수의 원형을 미리 정의하여야함
*/

using namespace std;
// ';'

int main() {

	//산술연산에서 한개라도 실수일경우 연산값의 결과는 실수값으로 나오게된다
	float a = 9.0;
	int b = 5;

	cout << a / b << endl;
	//1.8


	//auto  자료형은 선언값에 따라서 자동으로 자료형을 선언한다
	auto n = 100;
	auto x = 1.5;
	auto y = 1.3e12L;
	// 그러나 이것은 썩 좋은 사용법은 아니다

	return 0;
}