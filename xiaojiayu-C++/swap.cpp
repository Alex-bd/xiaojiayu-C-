#include<iostream>
#include<string>
//����ģ��
template <class T>
void swap(T &a,T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

//��ģ��
template <class T>
class MyClass
{
	MyClass();
	void swap(T &a,T &b);
};
MyClass<T> myclass;
int main() 
{
	int i1 = 100;
	int i2 = 200;
	std::cout << "����ǰ��i1=" << i1 << ",i2 = " << i2 << "\n";
	swap(i1, i2);
	std::cout << "������i2=" << i1 << ",i2 = " << i2 << "\n";


	return 0;
}