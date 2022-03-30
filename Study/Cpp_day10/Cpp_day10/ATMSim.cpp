#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class DepositException
{
public:
	DepositException(int money) : reqDep(money) {}
	void ShowExceptionReason()
	{
		cout << "[예외 메세지: " << reqDep << "는 입금불가]" << endl;
	}

private:
	int reqDep;
};

class WithdrawException
{
public:
	WithdrawException(int money) : balance(money)
	{}
	void ShowExceptionReason()
	{
		cout << "[예외 메세지: 잔액 " << balance << ", 잔액부족]" << endl;
	}
private:
	int balance;
};

class Accout
{
public:
	Accout(const char* acc, int money) : balance(money)
	{
		strcpy(accNum, acc);
	}
	void Deposit(int money) throw (DepositException)
	{
		if (money < 0)
		{
			DepositException expn(money);
			throw expn;
		}
		balance += money;
	}
	void Withdraw(int money) throw (WithdrawException)
	{
		if (money > balance)
			throw WithdrawException(balance);
		balance -= money;
	}
	void ShowMyMoney()
	{
		cout << "잔고: " << balance << endl << endl;
	}
private:
	char accNum[50];
	int balance;
};

int main()
{
	Accout myAcc("56789-827120", 5000);

	try
	{
		myAcc.Deposit(2000);
		myAcc.Deposit(-300);
	}
	catch (DepositException &expn)
	{
		expn.ShowExceptionReason();
	}
	myAcc.ShowMyMoney();

	try
	{
		myAcc.Withdraw(3500);
		myAcc.Withdraw(4500);
	}
	catch (WithdrawException &expn)
	{
		expn.ShowExceptionReason();
	}
	myAcc.ShowMyMoney();

	return 0;
}