//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Gun
//{
//public:
//	Gun(int bnum):bullet(bnum)
//	{}
//	void Shot()
//	{
//		cout << "BBANG!" << endl;
//		bullet--;
//	}
//
//private:
//	int bullet;
//};
//
//class Police : public Gun
//{
//public:
//	Police(int bnum, int bcuff):Gun(bnum), handcuffs(bcuff)
//	{}
//	void PutHandcuff()
//	{
//		cout << "SNAP!" << endl;
//		handcuffs--;
//	}
//
//private:
//	int handcuffs;
//};
//
//int main(void)
//{
//	Police pman(5, 3);
//	pman.Shot();
//	pman.PutHandcuff();
//
//	return 0;
//}