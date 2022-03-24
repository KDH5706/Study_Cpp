///*
//* BankingSystem Ver 0.5
//* 작성자: 김동훈
//* 내용: AccountHandler라는 이름의 컨트롤 클래스 정의
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
//	cout << "계좌ID: " << accID << endl;
//	cout << "이 름: " << cusName << endl;
//	cout << "잔 액: " << balance << endl;
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
//	cout << "1. 계좌개설" << endl;
//	cout << "2. 입    금" << endl;
//	cout << "3. 출    금" << endl;
//	cout << "4. 계좌정보 전체 출력" << endl;
//	cout << "5. 프로그램 종료" << endl;
//}
//
//
//void AccountHandler::MakeAccount(void)
//{
//	int id = 0;
//	char name[NAME_LEN] = { 0 };
//	int balance = 0;
//
//	cout << "[계좌개설]" << endl;
//	cout << "계좌ID: "; cin >> id;
//	cout << "이 름: "; cin >> name;
//	cout << "입금액: "; cin >> balance;
//	cout << endl;
//
//	accArr[accNum++] = new Account(id, balance, name);
//}
//
//void AccountHandler::DepositMoney(void)
//{
//	int money = 0;
//	int id;
//	cout << "[입 금]" << endl;
//	cout << "계좌ID: "; cin >> id;
//	cout << "입금액: "; cin >> money;
//
//	for (int i = 0; i < accNum; i++)
//	{
//		if (accArr[i]->GetAccID() == id)
//		{
//			accArr[i]->Deposit(money);
//			cout << "입금완료" << endl << endl;
//			return;
//		}
//	}
//	cout << "유효하지 않은 ID 입니다." << endl << endl;
//}
//void AccountHandler::WithdrawMoney(void)
//{
//	int money = 0;
//	int id = 0;
//	cout << "[출  금]" << endl;
//	cout << "계좌ID: "; cin >> id;
//	cout << "출금액: "; cin >> money;
//
//	for (int i = 0; i < accNum; i++)
//	{
//		if (accArr[i]->GetAccID() == id)
//		{
//			if (accArr[i]->Withdraw(money) == 0)
//			{
//				cout << "잔액부족" << endl << endl;
//				return;
//			}
//
//			cout << "출금완료" << endl << endl;
//			return;
//		}
//	}
//	cout << "유효하지 않은 ID 입니다." << endl << endl;
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
//		cout << "선택: ";
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
