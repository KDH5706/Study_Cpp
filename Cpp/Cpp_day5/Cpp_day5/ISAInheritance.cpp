//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Computer
//{
//public:
//	Computer(const char * name)
//	{
//		strcpy(owner, name);
//	}
//	void Calculate()
//	{
//		cout << "요청 내용을 계산합니다." << endl;
//	}
//
//private:
//	char owner[50];
//};
//
//class NoteBookComp :public Computer
//{
//public:
//	NoteBookComp(const char* name, int initChag) :Computer(name), Battery(initChag)
//	{
//	}
//	void Charging()
//	{
//		Battery += 5;
//	}
//	void UseBattry()
//	{
//		Battery -= 1;
//	}
//	void MovingCall()
//	{
//		if (GetBatteryInfo() < 1)
//		{
//			cout << "충전이 필료합니다." << endl;
//			return;
//		}
//		cout << "이동하면서 ";
//		Calculate();
//		UseBattry();
//	}
//	int GetBatteryInfo()
//	{
//		return Battery;
//	}
//
//private:
//	int Battery;
//};
//
//class TableNoteBook : public NoteBookComp
//{
//public:
//	TableNoteBook(const char* name, int initChag, const char* pen) : NoteBookComp(name, initChag)
//	{
//		strcpy(regstPeModel, pen);
//	}
//	void Write(const char* penInfo)
//	{
//		if (GetBatteryInfo() < 1)
//		{
//			cout << "충전이 필요합니다." << endl;
//			return;
//		}
//		if (strcmp(regstPeModel, penInfo) != 0)
//		{
//			cout << "등록된 펜이 아닙니다.";
//			return;
//		}
//		cout << "필기 내용을 처리합니다." << endl;
//		UseBattry();
//	}
//
//private:
//	char regstPeModel[50];
//
//};
//
//int main(void)
//{
//	NoteBookComp nc("이수종", 5);
//	TableNoteBook tn("정수영", 5, "ISE-241-242");
//	nc.MovingCall();
//	tn.Write("ISE-241-242");
//
//	return 0;
//}