#include <iostream>
#include <string>
using namespace std;
using namespace std;
class Human
{
public:
	unsigned int age;
	string name;
	bool sex;
	Human (unsigned int Age, string Name, bool Sex)
	{
		age = Age;
		name = Name;
		if (Sex ==0)
		{
			sex = Sex;
			cout << "������� ������� �� ����� " <<name<< endl;
		}
		else if (Sex == 1)
		{
			sex = Sex;
			cout << "������ ������� �� ����� " <<name<< endl;
		}
	}
};

int main()
{

	setlocale(0, "");
	Human human1 (20, "�����", 1);
	Human human2 (19, "���������", 0);
	return 0;
}