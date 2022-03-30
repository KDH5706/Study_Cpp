#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Human
{
public:
	Human(const char* myname, int myage) : age(myage)
	{
		name = new char[strlen(myname) + 1];
		strcpy(name, myname);
	}
	Human(const Human& ref) : age(ref.age) 
	{
		name = new char[strlen(ref.name) + 1];
		strcpy(name, ref.name);
	}
	~Human()
	{
		delete[]name;
	}
	void printHuman() const
	{
		cout << "이름 : " << name << ", 나이 : " << age << endl;
	}
private:
	char* name;
	int age;
};

int main()
{
	Human man("이순신", 50);
	Human man1(man);
	Human xman = man;

	man.printHuman();
	man1.printHuman();
	xman.printHuman();

	return 0;
}