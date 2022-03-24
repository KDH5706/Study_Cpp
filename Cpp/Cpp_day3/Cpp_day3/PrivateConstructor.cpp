//#include <iostream>
//using namespace std;
//
//class AAA
//{
//private:
//	int num;
//public:
//	AAA() :num(0)
//	{
//	}
//	AAA& CreateInitObj(int n) const
//	{
//		AAA* ptr = new AAA(n);
//		return *ptr;
//	}
//	void Shownum() const
//	{
//		cout << num << endl;
//	}
//private:
//	AAA(int n) : num(n)
//	{
//	}
//};
//
//int main(void)
//{
//	AAA base;
//	base.Shownum();
//
//	AAA& obj1 = base.CreateInitObj(3);
//	obj1.Shownum();
//
//	AAA& obj2 = base.CreateInitObj(12);
//	obj2.Shownum();
//
//	delete& obj1;
//	delete& obj2;
//
//	return 0;
//}
