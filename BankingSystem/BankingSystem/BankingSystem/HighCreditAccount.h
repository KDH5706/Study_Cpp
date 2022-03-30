/*
* 파일이름 : HighCreditAccount.h
* 작성자 : 김동훈
* 업데이트 정보 : [2022.03.22] 파일버전 0.7
*/

#pragma once
#ifndef __HIGHCREDIT_ACCOUNT_H__
#define __HIGHCREDIT_ACCOUNT_H__

#include "NormalAccount.h"

class HighCreditAccount : public NormalAccount
{
public:
	HighCreditAccount(int ID, int money, const char* name, int rate, int special)
		: NormalAccount(ID, money, name, rate), specialRate(special)
	{}

	virtual void Deposit(int money)
	{
		NormalAccount::Deposit(money);
		Account::Deposit((int)(money * (specialRate / 100.0)));
	}

private:
	int specialRate;
};

#endif // !__HIGHCREDIT_ACCOUNT_H__

