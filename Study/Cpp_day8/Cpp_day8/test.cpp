#include <iostream>
#include <memory>
using namespace std;

class AAA
{
public:
	AAA()
	{
		cout << "AAA()" << endl;
	}
	~AAA() 
	{
		cout << "~AAA()" << endl;
	}
	void func()
	{
		cout << "AAA::func()" << endl;
	}
};

int main()
{
	//< > : ���ø� - �ڷ����� ����ִ´�
	//unique_ptr <AAA> ptr1 = make_unique<AAA>();  //����Ʈ ������ (�ϳ��� �����Ͱ� �ϳ��� ��ü�� ����ų �� �ִ�.)
	shared_ptr<AAA> ptr1 = make_shared<AAA>(); //����Ʈ ������ (�������� �����Ͱ� �ϳ��� ��ü�� ����ų �� �ִ�.)
	ptr1->func();
	cout << "count : " << ptr1.use_count() << endl;
	{
		shared_ptr<AAA> ptr2(ptr1);
		cout << "count : " << ptr2.use_count() << endl;
		cout << "count : " << ptr1.use_count() << endl;
	}
	cout << "count : " << ptr1.use_count() << endl;
	return 0;
}