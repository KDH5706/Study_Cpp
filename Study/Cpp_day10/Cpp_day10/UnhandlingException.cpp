#include <iostream>
using namespace std;

int main()
{
	int num1, num2;

	while (true)
	{
		cout << "�� ���� ���� �Է�: ";
		cin >> num1 >> num2;

		if (num2 == 0)
		{
			cout << "������ 0�� �� �� �����ϴ�." << endl;
			cout << "�ٽ� �Է��ϼ���." << endl;
		}
		else
			break;
	}

	cout << "�������� ��: " << num1 / num2 << endl;
	cout << "�������� ������: " << num1 % num2 << endl;

	return 0;
}