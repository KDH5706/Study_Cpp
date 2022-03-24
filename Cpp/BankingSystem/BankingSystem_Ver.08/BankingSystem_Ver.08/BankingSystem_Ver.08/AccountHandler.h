/*
* �����̸� : AccountHandler.h
* �ۼ��� : �赿��
* ������Ʈ ���� : [2022.03.24] ���Ϲ��� 0.8
*/

#pragma once
#ifndef __ACCOUNT_HANDLER_H__
#define __ACCOUNT_HANDLER_H__

#include "Account.h"
#include "AccountArray.h"

class AccountHandler
{
private:
	BoundCheckAccountPtrArray accArr;
	int accNum;

public:
	AccountHandler();
	void ShowMenu(void) const;
	void MakeAccount(void);
	void DepositMoney(void);
	void WithdrawMoney(void);
	void ShowAllAccInfo(void) const;
	~AccountHandler();

protected:
	void MakeNormalAccount(void);
	void MakeCreditAccount(void);
};
#endif // !__ACCOUNT_HANDLER_H__
