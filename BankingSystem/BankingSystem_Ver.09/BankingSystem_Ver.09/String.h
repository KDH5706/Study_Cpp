/*
* �����̸� : String.h
* �ۼ��� : �赿��
* ������Ʈ ���� : [2022.03.24] ���Ϲ��� 0.1
*/

#pragma once
#ifndef __STRING_H__
#define __STRING_H__

#include "BankingCommonDecl.h"

class String
{
public:
	String();
	String(const char* s);
	String(const String& s);
	~String();
	String& operator= (const String& s);
	String& operator+= (const String& s);
	bool operator== (const String& s);
	String operator+ (const String& s);

	friend ostream& operator<< (ostream& os, const String& s);
	friend istream& operator>> (istream& is, String& s);

private:
	int len;
	char* str;
};

#endif // !__STRING_H__

