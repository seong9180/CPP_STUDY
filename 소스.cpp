//논리 연산자. 2022.12.19
#include <iostream>
using namespace std;

int main()
{
	int year;
	bool result;

	cout << "연도를 입력하세요: ";
	cin >> year;
	/*
	윤년 계산법
	1.4로 나누어 떨어지는 연도는 윤년으로 한다.
	and
	2.100으로 나누어 떨어지는 연도는 평년으로 한다.
	or
	3.400으로 나누어 떨어지는 연도는 윤년이다.
	*/

	result = { (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0) };
	if (result == true) {
		cout << year << "년도는 윤년입니다." << endl;
	}
	else {
		cout << year << "년도는 평년입니다." << endl;
	}

	return 0;
}