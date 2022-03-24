/*
* 파일이름 : NormalAccount.h
* 작성자 : 김동훈
* 업데이트 정보 : [2022.03.22] 파일버전 0.7
*/

#pragma once
#ifndef __NORMAL_ACCOUNT_H__
#define __NORMAL_ACCOUNT_H__

#include "Account.h"

class NormalAccount :public Account
{
public:
	NormalAccount(int ID, int money, const char* name, int rate)
		: Account(ID, money, name), interRate(rate)
	{}

	virtual void Deposit(int money)
	{
		Account::Deposit(money);
		Account::Deposit((int)(money * (interRate / 100.0)));
	}

private:
	int interRate;	//이자율 %단위
};
#endif // !__NORMAL_ACCOUNT_H__
