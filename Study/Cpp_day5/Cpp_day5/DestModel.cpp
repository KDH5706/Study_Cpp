//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Person
//{
//public:
//	Person(const char* myname)
//	{
//		name = new char[strlen(myname) + 1];
//		strcpy(name, myname);
//	}
//	~Person()
//	{
//		delete[]name;
//	}
//	void WhatYourName() const
//	{
//		cout << "My name is " << name << endl;
//	}
//
//private:
//	char* name;
//};
//
//class UnivStudent : public Person
//{
//public:
//	UnivStudent(const char* myname, const char* mymajor) :Person(myname)
//	{
//		major = new char[strlen(mymajor) + 1];
//		strcpy(major, mymajor);
//	}
//	~UnivStudent()
//	{
//		delete[]major;
//	}
//	void WhoAreYou() const
//	{
//		WhatYourName();
//		cout << "My marjor is " << major << endl << endl;
//	}
//private:
//	char* major;
//};
//
//int main(void)
//{
//	UnivStudent st1("kim", "Mathmatics");
//	st1.WhoAreYou();
//
//	UnivStudent st2("Hong", "Physics");
//	st2.WhoAreYou();
//
//
//	return 0;
//}