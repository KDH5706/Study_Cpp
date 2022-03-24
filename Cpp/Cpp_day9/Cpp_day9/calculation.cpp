#include <iostream>
using namespace std;

template <typename T>
T Add(T num1, T num2) { return num1 + num2; }

template <typename T>
T Sub(T num1, T num2) { return num1 - num2; }

template <typename T>
T Mul(T num1, T num2) { return num1 * num2; }

template <typename T>
T Div(T num1, T num2) { return num1 / num2; }


int main()
{
	cout << Add(3.2, 2.6) << endl;
	cout << Sub(3.2, 2.6) << endl;
	cout << Mul(3.2, 2.6) << endl;
	cout << Div(3.2, 2.6) << endl;

	return 0;
}