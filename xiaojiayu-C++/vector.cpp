#include<iostream>
#include<string>
#include<vector>

int main()
{
	std::vector<std::string> name;
	name.push_back("wang");
	name.push_back("bao");
	/*for (int  i = 0; i < name.size(); i++)
	{
		std::cout << name[i] << "\n";
	}*/
	std::vector<std::string>::iterator iter = name.begin();
	while (iter != name.end())
	{
		std::cout << *iter << "\n";
		++iter;
	}
	return 0;
}