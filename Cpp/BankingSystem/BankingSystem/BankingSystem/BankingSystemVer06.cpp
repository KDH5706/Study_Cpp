///*
//* BankingSystem Ver 0.6
//* �ۼ���: �赿��
//* ����: ���ڰ��� ���� Ŭ������ �߰�
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//const int NAME_LEN = 20;
//
////���α׷� ������� ���� �޴�
//enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };
//
////�ſ���
//enum { LEVEL_A = 7, LEVEL_B = 4, LEVEL_C = 2 };
//
////������ ����
//enum { NORMAL = 1, CREDIT = 2 };
//
///*
//* Ŭ���� �̸�: Account
//* Ŭ���� ����: Entity Ŭ����
//*/
//
//class Account
//{
//public:
//	Account(int ID, int money, const char* name);
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
//Account::Account(int ID, int money, const char* name) :accID(ID), balance(money)
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
///*
//* Ŭ���� �̸�: NormalAccount
//* Ŭ���� ����: Entity Ŭ����
//*/
//
//class NormalAccount :public Account
//{
//public:
//	NormalAccount(int ID, int money, const char* name, int rate) : Account(ID, money, name), interRate(rate)
//	{}
//
//	virtual void Deposit(int money)
//	{
//		Account::Deposit(money);
//		Account::Deposit((int)(money*(interRate/100.0)));
//	}
//
//private:
//	int interRate;
//};
//
///*
//* Ŭ���� �̸�: NormalAccount
//* Ŭ���� ����: Entity Ŭ����
//*/
//
//class HighCreditAccount : public NormalAccount
//{
//public:
//	HighCreditAccount(int ID, int money, const char* name, int rate, int special)
//		: NormalAccount(ID, money, name, rate), specialRate(special)
//	{}
//
//	virtual void Deposit(int money)
//	{
//		NormalAccount::Deposit(money);
//		Account::Deposit((int)(money * (specialRate / 100.0)));
//	}
//
//private:
//	int specialRate;
//};
//
///*
//* Ŭ���� �̸�: AccountHandler
//* Ŭ���� ����: ��Ʈ��(Control) Ŭ����
//*/
//
//class AccountHandler
//{
//private:
//	Account* accArr[100];
//	int accNum;
//
//public:
//	AccountHandler();
//	void ShowMenu(void) const;
//	void MakeAccount(void);
//	void DepositMoney(void);
//	void WithdrawMoney(void);
//	void ShowAllAccInfo(void) const;
//	~AccountHandler();
//
//protected:
//	void MakeNormalAccount(void);
//	void MakeCreditAccount(void);
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
//void AccountHandler::MakeAccount(void)
//{
//	int sel;
//	cout << "[������������]" << endl;
//	cout << "1.���뿹�ݰ��� ";
//	cout << "2.�ſ�ŷڰ��� " << endl;
//	cout << "����: " << endl;
//	cin >> sel;
//
//	if (sel == NORMAL)
//		MakeNormalAccount();
//	else
//		MakeCreditAccount();
//}
//
//
//void AccountHandler::MakeNormalAccount(void)
//{
//	int id = 0;
//	char name[NAME_LEN] = { 0 };
//	int balance = 0;
//	int interRate;
//
//	cout << "[���뿹�ݰ��� ����]" << endl;
//	cout << "����ID: "; cin >> id;
//	cout << "�� ��: "; cin >> name;
//	cout << "�Աݾ�: "; cin >> balance;
//	cout << "������: "; cin >> interRate;
//	cout << endl;
//
//	accArr[accNum++] = new NormalAccount(id, balance, name, interRate);
//}
//
//void AccountHandler::MakeCreditAccount(void)
//{
//	int id = 0;
//	char name[NAME_LEN] = { 0 };
//	int balance = 0;
//	int interRate;
//	int creditLevel;
//
//	cout << "[�ſ�ŷڰ��� ����]" << endl;
//	cout << "����ID: "; cin >> id;
//	cout << "�� ��: "; cin >> name;
//	cout << "�Աݾ�: "; cin >> balance;
//	cout << "������: "; cin >> interRate;
//	cout << "�ſ���(1toA, 2toB, 3toC): "; cin >> creditLevel;
//	cout << endl;
//
//	switch (creditLevel)
//	{
//	case 1:
//		accArr[accNum++] = new HighCreditAccount(id, balance, name, interRate, LEVEL_A);
//		break;
//	case 2:
//		accArr[accNum++] = new HighCreditAccount(id, balance, name, interRate, LEVEL_B);
//		break;
//	case 3:
//		accArr[accNum++] = new HighCreditAccount(id, balance, name, interRate, LEVEL_C);
//		break;
//	}
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
//{ 
//	for (int i = 0; i < 100; i++)
//	{
//		accArr[i] = { 0 };
//	}
//}
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
///*
//* ��Ʈ�� Ŭ���� AccountHandler �߽��� main �Լ�
//*/
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
