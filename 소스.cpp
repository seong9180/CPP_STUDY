//�� ������. 2022.12.19
#include <iostream>
using namespace std;

int main()
{
	int year;
	bool result;

	cout << "������ �Է��ϼ���: ";
	cin >> year;
	/*
	���� ����
	1.4�� ������ �������� ������ �������� �Ѵ�.
	and
	2.100���� ������ �������� ������ ������� �Ѵ�.
	or
	3.400���� ������ �������� ������ �����̴�.
	*/

	result = { (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0) };
	if (result == true) {
		cout << year << "�⵵�� �����Դϴ�." << endl;
	}
	else {
		cout << year << "�⵵�� ����Դϴ�." << endl;
	}

	return 0;
}