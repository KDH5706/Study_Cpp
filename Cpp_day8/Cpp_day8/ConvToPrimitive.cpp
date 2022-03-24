#include <iostream>
using namespace std;

class Number
{
public:
	Number(int n = 0) : num(n)
	{
		cout << "Number(int n=0)" << endl;
	}
	Number& operator=(const Number& ref)
	{
		cout << "operator=()" << endl;
		num = ref.num;
		return *this;
	}
	operator int()
	{
		return num;
	}
	void ShowNuber() { cout << num << endl; }

private:
	int num;
};

int main(void)
{
	Number num1;
	num1 = 30;
	Number num2 = num1 + 20;	//num1�̶�� ��ü�� int������ ����ȯ �ؾ��ؼ� operator int() �Լ��� ȣ��
	num2.ShowNuber();

	return 0;
}