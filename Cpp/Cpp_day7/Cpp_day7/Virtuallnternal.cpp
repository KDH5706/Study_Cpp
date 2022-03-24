//#include <iostream>
//using namespace std;
//
//class AAA
//{
//public:
//	virtual void Func1() { cout << "Fun1" << endl; }
//	virtual void Func2() { cout << "Fun2" << endl; }
//
//private:
//	int num1;
//};
//
//class BBB :public AAA
//{
//public:
//	virtual void Func1() { cout << "BBB::Fun1" << endl; }
//	void Func3() { cout << "Fun3" << endl; }
//
//private:
//	int num2;
//};
//
//int main()
//{
//	AAA* aptr = new AAA();
//	aptr->Func1();
//
//	BBB* bptr = new BBB();
//	bptr->Func1();
//
//	return 0;
//}