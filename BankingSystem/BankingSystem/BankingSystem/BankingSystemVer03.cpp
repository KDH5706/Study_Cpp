///*
//* BankingSystem Ver 0.3
//* ?ۼ???: ?赿??
//* ????: ???? ???縦 ???? ?????????? ?߰?
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//const int NAME_LEN = 20;
//
//void ShowMenu(void);
//void MakeAccount(void);
//void DepositMoney(void);
//void WithdrawMoney(void);
//void ShowAllAccInfo(void);
//
//enum {MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};
//
//class Account
//{
//public:
//	Account(int ID, int money, char* name) :accID(ID), balance(money)
//	{
//		int len = strlen(name) + 1;
//		cusName = new char[len];
//		strcpy(cusName, name);
//	}
//
//	Account(const Account& ref) :accID(ref.accID), balance(ref.balance)
//	{
//		int len = strlen(ref.cusName) + 1;
//		cusName = new char[len];
//		strcpy(cusName, ref.cusName);
//	}
//
//	int GetAccID()
//	{
//		return accID;
//	}
//
//	void Deposit(int money)
//	{
//		balance += money;
//	}
//
//	int Withdraw(int money)
//	{
//		if (balance < money)
//			return 0;
//
//		balance -= money;
//		return money;
//	}
//
//	void ShowAccInfo()
//	{
//		cout << "????ID: " << accID << endl;
//		cout << "?? ??: " << cusName << endl;
//		cout << "?? ??: " << balance << endl;
//
//	}
//
//	~Account()
//	{
//		delete[]cusName;
//	}
//
//private:
//	int accID;
//	int balance;
//	char* cusName;
//};
//
//
//Account *accArr[100];
//int accNum = 0;
//
//int main(void)
//{
//	int choice;
//
//	while (true)
//	{
//		ShowMenu();
//		cout << "????: ";
//		cin >> choice;
//		cout << endl;
//
//		switch (choice)
//		{
//		case MAKE:
//			MakeAccount();
//			break;
//		case DEPOSIT:
//			DepositMoney();
//			break;
//		case WITHDRAW:
//			WithdrawMoney();
//			break;
//		case INQUIRE:
//			ShowAllAccInfo();
//			break;
//		case EXIT:
//			for (int i = 0; i < accNum; i++)
//				delete accArr[i];
//			return 0;
//		default:
//			cout << "Illegal selection.." << endl;
//		}
//	}
//	return 0;
//}
//
//void ShowMenu(void)
//{
//	cout << "-----Mene-----" << endl;
//	cout << "1, ???°???" << endl;
//	cout << "2, ??    ??" << endl;
//	cout << "3, ??    ??" << endl;
//	cout << "4, ???????? ??ü ????" << endl;
//	cout << "5, ???α׷? ????" << endl;
//}
//
//void MakeAccount(void)
//{
//	int id = 0;
//	char name[NAME_LEN] = { 0 };
//	int balance = 0;
//
//	cout << "[???°???]" << endl;
//	cout << "????ID: "; cin >> id;
//	cout << "?? ??: "; cin >> name;
//	cout << "?Աݾ?: "; cin >> balance;
//	cout << endl;
//
//	accArr[accNum++] = new Account(id, balance, name);
//}
//void DepositMoney(void)
//{
//	int money = 0;
//	int id;
//	cout << "[?Ա?]" << endl;
//	cout << "????ID: "; cin >> id;
//	cout << "?Աݾ?: "; cin >> money;
//
//	for (int i = 0; i < accNum; i++)
//	{
//		if (accArr[i]->GetAccID() == id)
//		{
//			accArr[i]->Deposit(money);
//			cout << "?ԱݿϷ?" << endl << endl;
//			return;
//		}
//	}
//	cout << "??ȿ???? ???? ID ?Դϴ?." << endl << endl;
//}
//void WithdrawMoney(void)
//{
//	int money = 0;
//	int id = 0;
//	cout << "[??  ??]" << endl;
//	cout << "????ID: "; cin >> id;
//	cout << "???ݾ?: "; cin >> money;
//
//	for (int i = 0; i < accNum; i++)
//	{
//		if (accArr[i]->GetAccID() == id)
//		{
//			if (accArr[i]->Withdraw(money) == money)
//			{
//				cout << "?ܾ׺???" << endl << endl;
//				return;
//			}
//
//			cout << "???ݿϷ?" << endl << endl;
//			return;
//		}
//	}
//	cout << "??ȿ???? ???? ID ?Դϴ?." << endl << endl;
//}
//void ShowAllAccInfo(void)
//{
//	for (int i = 0; i < accNum; i++)
//	{
//		accArr[i]->ShowAccInfo();
//		cout << endl;
//	}
//}