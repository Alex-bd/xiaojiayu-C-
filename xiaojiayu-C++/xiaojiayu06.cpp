/*
���飬ָ�룬�ṹ

*/
#include <iostream>
#define ITEN 10

using namespace std;
int main()
{
	int num[ITEN];
	cout << "������10�����ݣ�\n\n";
	for (int  i = 0; i < ITEN; i++)
	{
		cout << "�������" << i + 1 << "�����ݣ�";
		while (!cin >> num[i])	//cin�����ʱ��᷵��0���ټӣ� ��ǿ�ȶ���
		{
			cin.clear();
			cin.ignore(100, '\n');		//����\nǰ����ַ������100��
			cout << "���벻�Ϸ���";
		}
	}
	int total = 0;
	for (int  j = 0; j <ITEN; j++)
	{
		total += num[j];
	}
	cout << "�ܺ��ǣ�" << total;
	return 0;
}