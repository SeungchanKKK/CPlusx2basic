#include <iostream>
#include <cstring>

using namespace std;

int main() {
	//C++ ���� ���ڿ��� �ٷ�� ����� �ϳ��� string
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++programing";

	cout << "�ȳ��ϼ��� ����" << name2;
	cout << "�Դϴ� ������ ��� �ǽó���?\n";
	//cin >> name1; // �Է°��� name1 �� �����Ѵ�
	cin.getline(name1, Size);
	cout << "��, " << name1 << "��,����� �̸���";


	return 0;
}