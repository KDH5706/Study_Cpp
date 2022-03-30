/*
* 파일이름 : Account.h
* 작성자 : 김동훈
* 업데이트 정보 : [2022.03.22] 파일버전 0.7
*/

#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

class Account
{
public:
	Account(int ID, int money, const char* name);
	Account(const Account& ref);

	int GetAccID() const;
	virtual void Deposit(int money);
	int Withdraw(int money);
	void ShowAccInfo() const;
	~Account();

private:
	int accID;
	int balance;
	char* cusName;
};


#endif // !__ACCOUNT_H__
