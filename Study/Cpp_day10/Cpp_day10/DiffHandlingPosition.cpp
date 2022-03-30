#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int StoI(char* str)
{
	int len = strlen(str);
	int num = 0;

	for (int i = 0; i < len; i++)
	{
		if (str[i] < '0' || str[i]>'9')
			throw str[i];
		int now_num = str[i] + (0 - '0');
		num += (int)(pow((double)10, (len - 1) - i) * now_num);
	}
	return num;
}

int main(void)
{
	char str1[100];
	char str2[100];

	while (true)
	{
		cout << "두 개의 숫자 입력: ";
		cin >> str1 >> str2;

		try
		{
			cout << str1 << " + " << str2 << " = " << StoI(str1) + StoI(str2) << endl;
			break;
		}
		catch (char ch)
		{
			cout << "문자 " << ch << "가 입력되었습니다." << endl;
			cout << "재입력 진행합니다." << endl << endl;
		}
	}
	cout << "프로그램을 종료합니다." << endl << endl;

	return 0;
}