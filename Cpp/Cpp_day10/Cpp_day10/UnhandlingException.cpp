#include <iostream>
using namespace std;

int main()
{
	int num1, num2;

	while (true)
	{
		cout << "두 개의 숫자 입력: ";
		cin >> num1 >> num2;

		if (num2 == 0)
		{
			cout << "제수는 0이 될 수 없습니다." << endl;
			cout << "다시 입력하세요." << endl;
		}
		else
			break;
	}

	cout << "나눗셈의 몫: " << num1 / num2 << endl;
	cout << "나눗셈의 나머지: " << num1 % num2 << endl;

	return 0;
}