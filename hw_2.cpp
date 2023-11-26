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
class DnD_Character : virtual public Human 
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
class student : virtual public Human
{
private:
	string education;
public:
	student()
	{
		education = "none";
	}
	student(string EDU) 
	{
		education = EDU;
	}
	string getEDU() const { return education; }
	void setEDU(string EDU) { education = EDU; }
};
class Isekai_character : public DnD_Character, public student
{
private:
	unsigned int lvl;
	char rang;
public:
	Isekai_character()
	{
		lvl = 1;
		rang = 'F';
	}
	Isekai_character(unsigned int level, char r)
	{
		lvl = level;
		rang = r;
	}
	char getRang() const { return rang; }
	void setEDU(char r) { rang = r; }
	unsigned int getLVL() const { return lvl; }
	void setLVL(unsigned int level) { lvl = level; }
}; 
class internet
{
public:
	int popularity;
	bool isOLD;
	internet()
	{
		popularity = 0;
		isOLD = 0;
	}
	internet(int popul, bool old)
	{
		popularity = popul;
		isOLD = old;
	}
	 int getPopularity() const { return popularity; }
	void setPopularity( int popl) { popularity = popl; }
	bool getOLD() const { return isOLD; }
	void setOLD(int old) { isOLD = old; }
};
class Vtuber : virtual public Isekai_character,  public internet
{
	int cash;
	Vtuber(int c)
	{
		cash = c;
	}
	unsigned int getCash() const { return cash; }
	string donate(unsigned int Howmuch)
	{
		cash += Howmuch;
		return "Thank you for donation! ^-^";
	}
};
class user : public Human, public internet
{
	string browser;
	user(string br) 
	{
		browser = br;
	}
	string getBrowser() const { return browser; }
	void setBrowser(string br ) { browser = br; }
};
class Moba_player : public internet, virtual public DnD_Character
{
	string Game;
	Moba_player(string G)
	{
		Game = G;
	}
	string getGame() const { return Game; }
	void setGame(string g) { Game = g; }
};


// DnD_char+ internet = Moba_player;
int main()
{

	setlocale(0, "");
	Human human1 (20, "Федор", 1);
	Human human2 (19, "Маргарита", 0);
	DnD_Character Warrior(30,17);
	student It_one("Programmer");
	Warrior.setSex(0);
	Warrior.setName("Claire");
	cout << Warrior.getHP() << endl;
	cout << It_one.getEDU() << endl;
	return 0;
}