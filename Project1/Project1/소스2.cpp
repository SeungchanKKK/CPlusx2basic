#include <iostream>
#include <cstring>

using namespace std;

int main() {
	//구조체

	//ex)축구선수
	struct MyStruct
	{
		string name;
		string position;
		float height;
		float weight;
	};

	MyStruct A;
	A.name = "son";
	A.position = "striker";
	A.height = 183;
	A.weight = 77;

	//공용체
	union MyUnion
	{
		int intVal;
		long longVal;
		float floatVal;
	};

	//열거체(enum)
	//기호 상수를 만드는 방법

	enum spectrum {
		red,orange,yellow,green,blue,violet,indigo,ultraviolet
	};
	/*
	* 1.spectrum을 새로운 데이터형 이름으로 만듭니다.
	* 2.red,orange,yellow 0에서 7까지 정수값을 각각 나타내는 기호상수로 만듭니다.
	*/
	
	spectrum a = orange;
	cout << a << endl;
	return 0;
}