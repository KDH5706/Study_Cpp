/*
* �����̸� : NormalAccount.h
* �ۼ��� : �赿��
* ������Ʈ ���� : [2022.03.22] ���Ϲ��� 0.7
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
	int interRate;	//������ %����
};
#endif // !__NORMAL_ACCOUNT_H__
