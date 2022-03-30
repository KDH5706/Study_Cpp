#include <iostream>
using namespace std;

void SimpleFuncOne(void);
void SimpleFuncTwo(void);
void SimpleFuncThree(void);

int main()
{
	try
	{
		SimpleFuncOne();
	}
	catch (int expn)
	{
		cout << "예외코드: " << expn << endl;
	}

	return 0;
}

void SimpleFuncOne()
{
	cout << "SimpleFuncOne()" << endl;
	SimpleFuncTwo();
	cout << "SimpleFuncOne() end" << endl;
}

void SimpleFuncTwo()
{
	cout << "SimpleFuncTwo()" << endl;
	SimpleFuncThree();
	cout << "SimpleFuncTwo() end" << endl;
}

void SimpleFuncThree()
{
	cout << "SimpleFuncThree()" << endl;
	throw -1;
}