#include <iostream>
#include<string>
using namespace std;
//c++���ַ���
int main()
{
	string str;
	cout << "������һ���ַ�����";
	//cin >> str;		cin���ڿո���ֹ��������getline
	getline(cin,str);	//��ȡһ�ж���

	cout << str;

	return 0;
}