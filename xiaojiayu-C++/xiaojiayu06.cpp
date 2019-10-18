/*
数组，指针，结构

*/
#include <iostream>
#define ITEN 10

using namespace std;
int main()
{
	int num[ITEN];
	cout << "请输入10个数据！\n\n";
	for (int  i = 0; i < ITEN; i++)
	{
		cout << "请输入第" << i + 1 << "个数据：";
		while (!cin >> num[i])	//cin错误的时候会返回0，再加！ 增强稳定性
		{
			cin.clear();
			cin.ignore(100, '\n');		//忽略\n前面的字符，最多100个
			cout << "输入不合法！";
		}
	}
	int total = 0;
	for (int  j = 0; j <ITEN; j++)
	{
		total += num[j];
	}
	cout << "总和是：" << total;
	return 0;
}