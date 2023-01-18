#include <iostream>
#include <cstring>

using namespace std;

int main() {
	//C++ 에서 문자열을 다루는 방법중 하나인 string
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++programing";

	cout << "안녕하세요 저는" << name2;
	cout << "입니다 성함이 어떻게 되시나요?\n";
	//cin >> name1; // 입력값을 name1 에 저장한다
	cin.getline(name1, Size);
	cout << "음, " << name1 << "씨,당신의 이름은";


	return 0;
}