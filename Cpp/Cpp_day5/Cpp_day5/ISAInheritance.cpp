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
//		cout << "��û ������ ����մϴ�." << endl;
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
//			cout << "������ �ʷ��մϴ�." << endl;
//			return;
//		}
//		cout << "�̵��ϸ鼭 ";
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
//			cout << "������ �ʿ��մϴ�." << endl;
//			return;
//		}
//		if (strcmp(regstPeModel, penInfo) != 0)
//		{
//			cout << "��ϵ� ���� �ƴմϴ�.";
//			return;
//		}
//		cout << "�ʱ� ������ ó���մϴ�." << endl;
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
//	NoteBookComp nc("�̼���", 5);
//	TableNoteBook tn("������", 5, "ISE-241-242");
//	nc.MovingCall();
//	tn.Write("ISE-241-242");
//
//	return 0;
//}