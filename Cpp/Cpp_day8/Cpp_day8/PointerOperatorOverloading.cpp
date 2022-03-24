#include <iostream>
using namespace std;

class Number
{
public:
	Number(int n):num(n){ }
	void ShowData() { cout << num << endl; }

	Number* operator->()
	{
		return this;
	}

	Number& operator*()
	{
		return *this;
	}

private:
	int num;
};

int main()
{
	Number num(20);
	num.ShowData();

	(*num) = 30;
	num->ShowData();
	(*num).ShowData();
	return 0;
}
