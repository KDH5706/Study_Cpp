//#include <iostream>
//using namespace std;
//
//class SoSimple
//{
//public:
//	SoSimple()
//	{
//		simObjCnt++;
//		cout << simObjCnt << "��° SoSimple ��ü" << endl;
//	}
//
//private:
//	static int simObjCnt;
//};
//int SoSimple::simObjCnt = 0;
//
//class SoComplex
//{
//public:
//	SoComplex()
//	{
//		cmxObjCnt++;
//		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
//	}
//	SoComplex(SoComplex& copy)
//	{
//		cmxObjCnt++;
//		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
//	}
//
//private:
//	static int cmxObjCnt;
//};
//int SoComplex::cmxObjCnt = 0;
//
//int main(void)
//{
//	SoSimple sim1;
//	SoSimple sim2;
//
//	SoComplex cmx1;
//	SoComplex cmx2 = cmx1;
//	SoComplex();
//
//	return 0;
//}
//
