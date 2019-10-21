#include<iostream>
#include<string>
//函数模板
template <class T>
void swap(T &a,T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

//类模板
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
	std::cout << "交换前，i1=" << i1 << ",i2 = " << i2 << "\n";
	swap(i1, i2);
	std::cout << "交换后，i2=" << i1 << ",i2 = " << i2 << "\n";


	return 0;
}