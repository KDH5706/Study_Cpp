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
	void ShowNuber() { cout << num << endl; }

private:
	int num;
};

int main()
{
	Number num;
	num = 30;
	num.ShowNuber();
	return 0;
}