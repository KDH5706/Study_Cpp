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
	//< > : 템플릿 - 자료형을 집어넣는다
	//unique_ptr <AAA> ptr1 = make_unique<AAA>();  //스마트 포인터 (하나의 포인터가 하나의 객체를 가르킬 수 있다.)
	shared_ptr<AAA> ptr1 = make_shared<AAA>(); //스마트 포인터 (여러개의 포인터가 하나의 객체를 가르킬 수 있다.)
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