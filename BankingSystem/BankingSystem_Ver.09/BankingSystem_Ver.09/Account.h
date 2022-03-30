/*
* 파일이름 : Account.h
* 작성자 : 김동훈
* 업데이트 정보 : [2022.03.24] 파일버전 0.9
*/

#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

#include "String.h"

class Account
{
public:
	Account(int ID, int money, String name);
	//Account(const Account& ref);
	//Account& operator=(const Account& ref);

	int GetAccID() const;
	virtual void Deposit(int money);
	int Withdraw(int money);
	void ShowAccInfo() const;
	//~Account();

private:
	int accID;
	int balance;
	String cusName;
};


#endif // !__ACCOUNT_H__
