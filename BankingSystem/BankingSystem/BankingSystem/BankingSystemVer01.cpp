///*
//* BankingSystem Ver 0.1
//* 작성자: 김동훈
//* 내용: OPP 단계별 프로젝트의 기본 틀 구성
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
//typedef struct
//{
//	int accID;
//	int balance;
//	char cusName[NAME_LEN];
//}Account;
//
//Account accArr[100];
//int accNum = 0;
//
//int main(void)
//{
//	int choice;
//
//	while (true)
//	{
//		ShowMenu();
//		cout << "선택: ";
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
//	cout << "1, 계좌개설" << endl;
//	cout << "2, 입    금" << endl;
//	cout << "3, 출    금" << endl;
//	cout << "4, 계좌정보 전체 출력" << endl;
//	cout << "5, 프로그램 종료" << endl;
//}
//
//void MakeAccount(void)
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
//	accArr[accNum].accID = id;
//	accArr[accNum].balance= balance;
//	strcpy(accArr[accNum].cusName, name);
//	accNum++;
//}
//void DepositMoney(void)
//{
//	int money = 0;
//	int id;
//	cout << "[입금]" << endl;
//	cout << "계좌ID: "; cin >> id;
//	cout << "입금액: "; cin >> money;
//
//	for (int i = 0; i < accNum; i++)
//	{
//		if (accArr[i].accID == id)
//		{
//			accArr[i].balance += money;
//			cout << "입금완료" << endl << endl;
//			return;
//		}
//	}
//	cout << "유효하지 않은 ID 입니다." << endl << endl;
//}
//void WithdrawMoney(void)
//{
//	int money = 0;
//	int id = 0;
//	cout << "[출  금]" << endl;
//	cout << "계좌ID: "; cin >> id;
//	cout << "출금액: "; cin >> money;
//
//	for (int i = 0; i < accNum; i++)
//	{
//		if (accArr[i].accID == id)
//		{
//			if (accArr[i].balance < money)
//			{
//				cout << "잔액부족" << endl << endl;
//				return;
//			}
//			accArr[i].balance -= money;
//			cout << "출금완료" << endl << endl;
//			return;
//		}
//	}
//	cout << "유효하지 않은 ID 입니다." << endl << endl;
//}
//void ShowAllAccInfo(void)
//{
//	for (int i = 0; i < accNum; i++)
//	{
//		cout << "계좌ID: " << accArr[i].accID << endl;
//		cout << "이 름: " << accArr[i].cusName << endl;
//		cout << "잔 액: " << accArr[i].balance << endl;
//	}
//}