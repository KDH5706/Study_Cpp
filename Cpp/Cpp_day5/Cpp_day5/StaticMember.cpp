//#include <iostream>
//using namespace std;
//
//class SoSimple
//{
//public:
//	SoSimple()
//	{
//		simObjCnt++;
//		cout << simObjCnt << "¹øÂ° SoSimple °´Ã¼" << endl;
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
//		cout << cmxObjCnt << "¹øÂ° SoComplex °´Ã¼" << endl;
//	}
//	SoComplex(SoComplex& copy)
//	{
//		cmxObjCnt++;
//		cout << cmxObjCnt << "¹øÂ° SoComplex °´Ã¼" << endl;
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
