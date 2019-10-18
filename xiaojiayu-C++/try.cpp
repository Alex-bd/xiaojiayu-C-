#include <iostream>
#include<string>
using namespace std;
//c++中字符串
int main()
{
	string str;
	cout << "请输入一个字符串：";
	//cin >> str;		cin会在空格处终止，所以用getline
	getline(cin,str);	//获取一行对象

	cout << str;

	return 0;
}