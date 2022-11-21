//다시 시작하는 공부의 첫 걸음
//2022.11.22 1일차

//입출력 헤더 파일
#include <iostream> 
//문자열 헤더 파일
#include <string> 
//namespace 의 이름 = std , 왜 std 일까? std 의 의미는?
using namespace std; 
 
int main(void)
{
	/* 입출력 예제
	cout << "Hello World!" << endl;
	return 0;
	*/

	string s1 = "Good";
	string s2 = "Morning";
	//" " : 띄어쓰기용 , \n 줄바꿈 
	string s3 = s1 + " " + s2 + "!\n"; 
	//endl을 쓰게 되면 \n이 없었어도 되는 게 아닐까
	cout << s3;
	string s4 = s1 + " " + s2 + "!";
	//진짜네? s3 == s4 임을 확인할 수 있다.
	cout << s4 << endl;
	return 0;
}