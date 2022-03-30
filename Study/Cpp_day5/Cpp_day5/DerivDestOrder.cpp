//#include <iostream>
//using namespace std;
//
//class SoBase
//{
//public:
//
//	SoBase(int n) : baseNum(n)
//	{
//		cout << "SoBase() : "<< baseNum << endl;
//	}
//	~SoBase()
//	{
//		cout << "~SoBase() : " << baseNum << endl;
//	}
//
//private:
//	int baseNum;
//};
//
//class SoDerived:public SoBase
//{
//public:
//
//	SoDerived(int n) : SoBase(n), derivNum(n)
//	{
//		cout << "SoDerived() : " << derivNum << endl;
//	}
//	~SoDerived()
//	{
//		cout << "~SoDerived() : " << derivNum << endl;
//	}
//
//private:
//	int derivNum;
//};
//
//
//int main(void)
//{
//	SoDerived drv1(15);
//	SoDerived drv2(27);
//
//	return 0;
//}