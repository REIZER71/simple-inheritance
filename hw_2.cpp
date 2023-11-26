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
			cout << "Создана женщина по имени " <<name<< endl;
		}
		else if (Sex == 1)
		{
			sex = Sex;
			cout << "Создан мужчина по имени " <<name<< endl;
		}
	}
};

int main()
{

	setlocale(0, "");
	Human human1 (20, "Федор", 1);
	Human human2 (19, "Маргарита", 0);
	return 0;
}