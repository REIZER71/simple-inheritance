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
			cout << "������� ������� �� ����� " <<name<< endl;
		}
		else if (Sex == 1)
		{
			sex = Sex;
			cout << "������ ������� �� ����� " <<name<< endl;
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
	unsigned short int hp, armor;
	
public:
	DnD_Character()
	{
		hp = 1;
		armor = 0;
		
	}
	inline DnD_Character (unsigned short int HP, unsigned short int Armor)
	{
		hp = HP;
		armor = Armor;
		
	}
	void setHP(int some_HP) { hp = some_HP; }
	void setArmor(int some_Armor) { armor = some_Armor; }
	int getHP() const { return hp; }
	int getArmor() const { return armor; }
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
	string getEDU() const { return education; }
	void setEDU(string EDU) { education = EDU; }
};

int main()
{

	setlocale(0, "");
	Human human1 (20, "�����", 1);
	Human human2 (19, "���������", 0);
	DnD_Character Warrior(30,17);
	student It_one("Programmer");
	Warrior.setSex(0);
	Warrior.setName("Claire");
	cout << Warrior.getHP() << endl;
	cout << It_one.getEDU() << endl;
	return 0;
}