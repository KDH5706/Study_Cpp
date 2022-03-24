//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Person
//{
//public:
//	Person(int myage, const char* myname) :age(myage)
//	{
//		strcpy(name, myname);
//	}
//	void WhatYourName() const
//	{
//		cout << "My name is " << name << endl;
//	}
//	void HowOldAreYou() const
//	{
//		cout << "I'm " << age << " years old" << endl;
//	}
//
//private:
//	int age;
//	char name[50];
//};
//
//class UnivStudent : public Person
//{
//public:
//	UnivStudent(const char* myname, int myage, const char* mymajor) :Person(myage, myname)
//	{
//		strcpy(major, mymajor);
//	}
//	void WhoAreYou() const
//	{
//		WhatYourName();
//		HowOldAreYou();
//		cout << "My major is" << major << endl << endl;
//	}
//
//private:
//	char major[50];
//};
//
//int main(void)
//{
//	UnivStudent ustd1("Lee", 22, "Computer eng.");
//	ustd1.WhoAreYou();
//
//	UnivStudent ustd2("Yoon", 21, "Electronic eng.");
//	ustd2.WhoAreYou();
//
//
//
//	return 0;
//}