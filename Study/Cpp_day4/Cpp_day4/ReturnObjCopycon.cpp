//#include <iostream>
//using namespace std;
//
//class SoSimple
//{
//public:
//	SoSimple(int n) :num(n)
//	{
//
//	}
//	SoSimple(const SoSimple& copy) :num(copy.num)
//	{
//		cout << "Called SoSimple(const SoSimple& copy)" << endl;
//	}
//	SoSimple& Addnum(int n)
//	{
//		num += n;
//		return *this;
//	}
//	void ShowData()
//	{
//		cout << "num: " << num << endl;
//	}
//
//private:
//	int num;
//};
//SoSimple SimpleFuncObj(SoSimple ob)
//{
//	cout << "return ÀÌÀü" << endl;
//	return ob;
//}
//
//int main(void)
//{
//	SoSimple obj(7);
//	SimpleFuncObj(obj).Addnum(30).ShowData();
//	obj.ShowData();
//
//	return 0;
//}