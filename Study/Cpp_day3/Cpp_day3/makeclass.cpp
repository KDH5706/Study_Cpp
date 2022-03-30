//#include <iostream>
//using namespace std;
//
//class Ctime
//{
//private:
//	int hour;
//	int min;
//	int sec;
//
//public:
//	/*Ctime()
//	{
//		cout << "디폴트 생산자" << endl;
//	}*/
//	Ctime(int ah, int am, int as) :hour(ah), min(am), sec(as)
//	{
//		/*hour = ah;
//		min = am;
//		sec = as;*/
//	}
//	/*void setTime(int ah, int am, int as)
//	{
//		hour = ah;
//		min = am;
//		sec = as;
//	}*/
//	void getTime() const
//	{
//		cout << "현재시간 : ";
//		cout << hour << "시 ";
//		cout << min << "분 ";
//		cout << sec << "초 입니다." << endl;
//	}
//};
//
//int main(void)
//{
//	Ctime t(11, 22, 10);
//	//t.setTime(11,22,10);
//	t.getTime();
//
//	return 0;
//}