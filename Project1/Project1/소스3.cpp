#include <iostream>

using namespace std;
	
void countDown(int);

int main() {
	//재귀호출 : C++ 에서 함수는 자기 자신을 호출할 수 있다.
	
	countDown(5);

	return 0;
}

void countDown(int n) {
	cout << "count" << n << endl;
	if (n > 0)
		countDown(n - 1);
	cout << n << "번째 재귀함수" << endl;
}