#include <iostream>
#include <cstring>

using namespace std;

int main() {
	//����ü

	//ex)�౸����
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

	//����ü
	union MyUnion
	{
		int intVal;
		long longVal;
		float floatVal;
	};

	//����ü(enum)
	//��ȣ ����� ����� ���

	enum spectrum {
		red,orange,yellow,green,blue,violet,indigo,ultraviolet
	};
	/*
	* 1.spectrum�� ���ο� �������� �̸����� ����ϴ�.
	* 2.red,orange,yellow 0���� 7���� �������� ���� ��Ÿ���� ��ȣ����� ����ϴ�.
	*/
	
	spectrum a = orange;
	cout << a << endl;
	return 0;
}