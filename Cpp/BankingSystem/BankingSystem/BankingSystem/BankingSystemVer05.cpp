///*
//* BankingSystem Ver 0.5
//* �ۼ���: �赿��
//* ����: AccountHandler��� �̸��� ��Ʈ�� Ŭ���� ����
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//const int NAME_LEN = 20;
//
//enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };
//
//class Account
//{
//public:
//	Account(int ID, int money, char* name);
//	Account(const Account& ref);
//
//	int GetAccID() const;
//	void Deposit(int money);
//	int Withdraw(int money);
//	void ShowAccInfo() const;
//	~Account();
//
//private:
//	int accID;
//	int balance;
//	char* cusName;
//};
//
//Account::Account(int ID, int money, char* name) :accID(ID), balance(money)
//{
//	int len = strlen(name) + 1;
//	cusName = new char[len];
//	strcpy(cusName, name);
//}
//
//Account::Account(const Account& ref) :accID(ref.accID), balance(ref.balance)
//{
//	int len = strlen(ref.cusName) + 1;
//	cusName = new char[len];
//	strcpy(cusName, ref.cusName);
//}
//
//int Account::GetAccID() const
//{
//	return accID;
//}
//
//void Account::Deposit(int money)
//{
//	balance += money;
//}
//
//int Account::Withdraw(int money)
//{
//	if (balance < money)
//		return 0;
//
//	balance -= money;
//	return money;
//}
//
//void Account::ShowAccInfo() const
//{
//	cout << "����ID: " << accID << endl;
//	cout << "�� ��: " << cusName << endl;
//	cout << "�� ��: " << balance << endl;
//
//}
//
//Account::~Account()
//{
//	delete[]cusName;
//}
//
//class AccountHandler
//{
//public:
//	AccountHandler();
//	void ShowMenu(void) const;
//	void MakeAccount(void);
//	void DepositMoney(void);
//	void WithdrawMoney(void);
//	void ShowAllAccInfo(void) const;
//	~AccountHandler();
//
//private:
//	Account* accArr[100];
//	int accNum;
//};
//
//void AccountHandler::ShowMenu(void) const
//{
//	cout << "-----Mene-----" << endl;
//	cout << "1. ���°���" << endl;
//	cout << "2. ��    ��" << endl;
//	cout << "3. ��    ��" << endl;
//	cout << "4. �������� ��ü ���" << endl;
//	cout << "5. ���α׷� ����" << endl;
//}
//
//
//void AccountHandler::MakeAccount(void)
//{
//	int id = 0;
//	char name[NAME_LEN] = { 0 };
//	int balance = 0;
//
//	cout << "[���°���]" << endl;
//	cout << "����ID: "; cin >> id;
//	cout << "�� ��: "; cin >> name;
//	cout << "�Աݾ�: "; cin >> balance;
//	cout << endl;
//
//	accArr[accNum++] = new Account(id, balance, name);
//}
//
//void AccountHandler::DepositMoney(void)
//{
//	int money = 0;
//	int id;
//	cout << "[�� ��]" << endl;
//	cout << "����ID: "; cin >> id;
//	cout << "�Աݾ�: "; cin >> money;
//
//	for (int i = 0; i < accNum; i++)
//	{
//		if (accArr[i]->GetAccID() == id)
//		{
//			accArr[i]->Deposit(money);
//			cout << "�ԱݿϷ�" << endl << endl;
//			return;
//		}
//	}
//	cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
//}
//void AccountHandler::WithdrawMoney(void)
//{
//	int money = 0;
//	int id = 0;
//	cout << "[��  ��]" << endl;
//	cout << "����ID: "; cin >> id;
//	cout << "��ݾ�: "; cin >> money;
//
//	for (int i = 0; i < accNum; i++)
//	{
//		if (accArr[i]->GetAccID() == id)
//		{
//			if (accArr[i]->Withdraw(money) == 0)
//			{
//				cout << "�ܾ׺���" << endl << endl;
//				return;
//			}
//
//			cout << "��ݿϷ�" << endl << endl;
//			return;
//		}
//	}
//	cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
//}
//
//AccountHandler::AccountHandler() : accNum(0)
//{ }
//
//void AccountHandler::ShowAllAccInfo(void) const
//{
//	for (int i = 0; i < accNum; i++)
//	{
//		accArr[i]->ShowAccInfo();
//		cout << endl;
//	}
//}
//
//AccountHandler::~AccountHandler()
//{
//	for (int i = 0; i < accNum; i++)
//		delete accArr[i];
//}
//
//int main(void)
//{
//	AccountHandler manager;
//	int choice;
//
//	while (true)
//	{
//		manager.ShowMenu();
//		cout << "����: ";
//		cin >> choice;
//		cout << endl;
//
//		switch (choice)
//		{
//		case MAKE:
//			manager.MakeAccount();
//			break;
//		case DEPOSIT:
//			manager.DepositMoney();
//			break;
//		case WITHDRAW:
//			manager.WithdrawMoney();
//			break;
//		case INQUIRE:
//			manager.ShowAllAccInfo();
//			break;
//		case EXIT:
//			return 0;
//		default:
//			cout << "Illegal selection.." << endl;
//		}
//	}
//	return 0;
//}