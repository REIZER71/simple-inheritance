#include <iostream>
#include <string>
using namespace std;
using namespace std;
class Human
{
private:
	unsigned int age;
	string name;
	bool sex;
public:
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
	//getters
	string getName() const { return name; }
	int getAge() const { return age; }
	bool getSex() const { return sex; }
	//setters
	void setName(string some_name) { name = some_name;}
	void setAge(int some_age) { age = some_age; }
	void setSex(bool some_sex) { sex = some_sex; }
};

int main()
{

	setlocale(0, "");
	Human human1 (20, "Федор", 1);
	Human human2 (19, "Маргарита", 0);
	return 0;
}