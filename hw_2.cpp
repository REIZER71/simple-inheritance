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
	Human() 
	{
		sex = rand() % 32767 + 1;
		if (sex == 0)
			name = "Jane";	
		else
			name = "John";
		age = 18;
		
	}
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
class DnD_Character : public Human 
{
private:
	unsigned short int hp, armor, spd, str, dex;
public:
	DnD_Character (unsigned short int HP, unsigned short int Armor, unsigned short int SPD, unsigned short int STR, unsigned short int DEX)
	{
		hp = HP;
		armor = Armor;
		SPD = spd;
		STR = str;
		DEX = dex;
	}
};
class student : public Human
{
private:
	string education;
public:
	student(string EDU) 
	{
		education = EDU;
	}
};

int main()
{

	setlocale(0, "");
	Human human1 (20, "Федор", 1);
	Human human2 (19, "Маргарита", 0);
	return 0;
}