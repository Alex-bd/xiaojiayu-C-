/*�ṹ
�﷨��
	struct name
	{
	}name;
*/
#include<iostream>
struct FishOil
{
	std::string name;
	std::string uid;
	char sex;
};

FishOil jiayu = {"wang","123",'��'};
FishOil *point = &jiayu;
(*point).name = "��ҹ";
point->name = "h";


