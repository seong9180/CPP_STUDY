//�ٽ� �����ϴ� ������ ù ����
//2022.11.22 1����

//����� ��� ����
#include <iostream> 
//���ڿ� ��� ����
#include <string> 
//namespace �� �̸� = std , �� std �ϱ�? std �� �ǹ̴�?
using namespace std; 
 
int main(void)
{
	/* ����� ����
	cout << "Hello World!" << endl;
	return 0;
	*/

	string s1 = "Good";
	string s2 = "Morning";
	//" " : ����� , \n �ٹٲ� 
	string s3 = s1 + " " + s2 + "!\n"; 
	//endl�� ���� �Ǹ� \n�� ����� �Ǵ� �� �ƴұ�
	cout << s3;
	string s4 = s1 + " " + s2 + "!";
	//��¥��? s3 == s4 ���� Ȯ���� �� �ִ�.
	cout << s4 << endl;
	return 0;
}