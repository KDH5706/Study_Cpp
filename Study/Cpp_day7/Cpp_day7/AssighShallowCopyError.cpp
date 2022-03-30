//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Person
//{
//public:
//	Person(const char* myname, int myage)
//		:age(myage)
//	{
//		name = new char[strlen(myname) + 1];
//		strcpy(name, myname);
//	}
//	void ShowPersonInfo() const
//	{
//		cout << "이름: " << name << endl;
//		cout << "나이: " << age << endl;
//	}
//
//	Person& operator= (const Person& ref)
//	{
//		delete[]name;
//
//		name = new char[strlen(ref.name) + 1];
//		strcpy(name, ref.name);
//		age = ref.age;
//
//		return *this;
//	}
//
//	~Person()
//	{
//		delete[]name;
//		cout << "called destructor!" << endl;
//	}
//
//private:
//	char* name;
//	int age;
//};
//
//int main()
//{
//	Person man1("Lee dong woo", 29);
//	Person man2("Yoon ji yul", 22);
//	man2 = man1;
//	man1.ShowPersonInfo();
//	man2.ShowPersonInfo();
//
//	return 0;
//};