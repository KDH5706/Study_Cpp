//#include <iostream>
//using namespace std;
//
//class First
//{
//public:
//	First(const char* str)
//	{
//		strOne = new char[strlen(str) + 1];
//	}
//	~First()
//	{
//		cout << "~First()" << endl;
//		delete[]strOne;
//	}
//
//private:
//	char* strOne;
//};
//
//class Second : public First
//{
//public:
//	Second(const char* str1, const char* str2) :First(str1)
//	{
//		strTwo = new char[strlen(str2) + 1];
//	}
//	~Second()
//	{
//		cout << "~Second()" << endl;
//		delete[]strTwo;
//	}
//
//private:
//	char* strTwo;
//};
//
//int main(void)
//{
//	First* ptr = new Second("simple", "complex");
//	delete ptr;
//
//	return 0;
//}