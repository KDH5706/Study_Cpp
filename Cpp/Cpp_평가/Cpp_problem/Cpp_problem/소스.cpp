#include <iostream>
#include <string>
#include <Windows.h>
#include <vector>
using namespace std;

class Product
{
public:
	Product(int myprice, string mydescription)
		: price(myprice), description(mydescription)
	{
		index++;
	}
	virtual void getProduct() {}
private:
	static int index;
	int price;
	string description;
};

class Book : public Product
{
public:

private:
	string title; 
	string writer;
	string publisher;
};

class CD : public Product
{
public:
	CD();
	~CD();
	void getProduct()
	{

	}
private:
	string title;
	int playtime;
	string singer;
};

class Cellphone : public Product
{
public:
	Cellphone();
	~Cellphone();
	void getProduct()
	{

	}
private:
	string model;
	string manufacturer;
};

void AddProduct()
{
	int pos;
	system("cls");
	cout << endl;
	cout << "추가상품선택 : " << endl;
	cout << "1. Book" << endl;
	cout << "2. Compact Disc" << endl;
	cout << "3. Cellphone" << endl << endl;
	cout << "$ : ";
	cin >> pos;

	switch (pos)
	{
	case 1:

		break;
	case 2:

		break;
	case 3:

		break;
	}
}

void LookupProduct()
{
	int pos;
	system("cls");
	cout << endl;
	cout << "조회상품 선택 : " << endl;
	cout << "1. Book" << endl;
	cout << "2. Compact Disc" << endl;
	cout << "3. Cellphone" << endl << endl;
	cout << "$ : ";
	cin >> pos;

	switch (pos)
	{
	case 1:

		break;
	case 2:

		break;
	case 3:

		break;
	}
}

void posMain()
{
	int pos;
	system("cls");
	cout << "+++++++++++++++ POS ++++++++++++++++" << endl << endl;
	cout << "1. 상품추가" << endl;
	cout << "2. 상품조회" << endl;
	cout << "3. 종    료" << endl << endl;
	cout << "$ : ";
	cin >> pos;

	switch (pos)
	{
	case 1:
		AddProduct();
		break;
	case 2:
		LookupProduct();
		break;
	case 3:
		exit(1);
	}
}

int main()
{
	Product* pobj[100];

	while (true)
	{
		posMain();
	}

	return 0;
}