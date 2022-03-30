/*
C++��
�̸� : �赿��
2022.03.28
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <string>
#include <vector>

using namespace std;

//���α׷� ������� ���� �޴�
enum { PRODUCTADD = 1, PRODUCTINQUIRY, EXIT };

//��ǰ�� ����
enum { BOOK = 1, COMPACTDISC, CELLPHONE };

class Product
{
public:
	Product(int price, string description);
	virtual void getProduct();
	virtual string ProductInfo();

private:
	int price;
	string description;
};

Product::Product(int price, string description)
{
	this->price = price;
	this->description = description;
}

void Product::getProduct()
{
	cout << " PRICE : " << price << endl;
	cout << " DESCRIPTION : " << description << endl;
}

string Product::ProductInfo() { return " "; }

class Book :public Product
{
public:
	Book(int price, string description, string isbn, string title, string writer, string publisher);
	virtual void getProduct();
	virtual string ProductInfo();

private:
	string isbn;
	string title;
	string writer;
	string publisher;
};

Book::Book(int price, string description, string isbn, string title, string writer, string publisher)
	: Product(price, description)
{
	this->isbn = isbn;
	this->title = title;
	this->writer = writer;
	this->publisher = publisher;
}
void Book::getProduct()
{
	cout << " ISBN : " << isbn << endl;
	cout << " TITLE : " << title << endl;
	cout << " WRITER : " << writer << endl;
	cout << " PUBLISHER : " << publisher << endl;
}

string Book::ProductInfo() { return "BOOK"; }

class CD :public Product
{
public:
	CD(int price, string description, string title, int playtime, string singer);
	virtual void getProduct();
	virtual string ProductInfo();

private:
	string title;
	int playtime;
	string singer;
};

CD::CD(int price, string description, string title, int playtime, string singer)
	: Product(price, description)
{
	this->title = title;
	this->playtime = playtime;
	this->singer = singer;
}

void CD::getProduct()
{
	cout << " TITLE : " << title << endl;
	cout << " PLAY TIME : " << playtime << endl;
	cout << " SINGER : " << singer << endl;
}

string CD::ProductInfo() { return "COMPACTDISC"; }

class Cellphone :public Product
{
public:
	Cellphone(int price, string description, string model, string manufacture);
	virtual void getProduct();
	virtual string ProductInfo();

private:
	string model;
	string manufacture;
};


Cellphone::Cellphone(int price, string description, string model, string manufacture)
	: Product(price, description)
{
	this->model = model;
	this->manufacture = manufacture;
}



void Cellphone::getProduct()
{
	cout << " MODEL : " << model << endl;
	cout << " MANUFACTURE : " << manufacture << endl;
}

string Cellphone::ProductInfo() { return "CELLPHONE"; }

class ProductHandler
{
private:
	Product* pobj[100];
	static int idx;

public:
	ProductHandler();
	~ProductHandler();
	void ShowMenu(void) const;
	void AddProduct(void);
	void InquiryProduct(void);

protected:
	void ProductAddBook(void);
	void ProductAddCompactDisc(void);
	void ProductAddCellPhone(void);
	void ShowAllBookInfo(void) const;
	void ShowAllCDInfo(void) const;
	void ShowAllCellPhonInfo(void) const;
};

//static ���� �ʱ�ȭ
int ProductHandler::idx = 0;

//������
ProductHandler::ProductHandler()
{
	for (int i = 0; i < 100; i++)
		pobj[i] = NULL;
}

//�Ҹ���
ProductHandler::~ProductHandler()
{
	for (int i = 0; i < idx; i++)
		delete pobj[i];
}

//����ȭ��
void ProductHandler::ShowMenu(void) const
{
	cout << endl << endl;
	cout << " +++++++++++++++ POS ++++++++++++++++" << endl << endl;
	cout << "  1. ��ǰ�߰�" << endl;
	cout << "  2. ��ǰ��ȸ" << endl;
	cout << "  3. ��    ��" << endl << endl;
	cout << "  $ : ";
}





//����ȭ�� -> ��ǰ�߰� ȭ��
void ProductHandler::AddProduct(void) {
	system("cls");
	int sel;
	cout << endl << endl;
	cout << "  �߰���ǰ���� :" << endl;
	cout << "  1. Book" << endl;
	cout << "  2. Compact Disc" << endl;
	cout << "  3. Cellphone" << endl << endl;
	cout << "  $ : ";
	cin >> sel;

	if (sel == BOOK)
		ProductAddBook();
	else if (sel == COMPACTDISC)
		ProductAddCompactDisc();
	else if (sel == CELLPHONE)
		ProductAddCellPhone();
}

//����ȭ�� -> ��ǰ��ȸ ȭ��
void ProductHandler::InquiryProduct() {
	system("cls");
	int sel;
	cout << endl << endl;
	cout << " ��ȸ��ǰ ���� :" << endl;
	cout << " 1. Book" << endl;
	cout << " 2. Compact Disc" << endl;
	cout << " 3. Cellphone" << endl;
	cout << " $ : ";
	cin >> sel;

	if (sel == BOOK)
		ShowAllBookInfo();
	else if (sel == COMPACTDISC)
		ShowAllCDInfo();
	else if (sel == CELLPHONE)
		ShowAllCellPhonInfo();
}

//��ǰ�߰� ȭ�� -> Book�߰�
void ProductHandler::ProductAddBook(void)
{
	int price;
	string description;
	string isbn;
	string title;
	string writer;
	string publisher;
	cout << endl << endl;
	cout << " ID: " << (idx + 1) << endl;
	cout << " price : $ "; cin >> price;
	cout << " description : $ "; cin >> description;
	cout << " ISBN : $ "; cin >> isbn;
	cout << " title : $ "; cin >> title;
	cout << " writer : $ "; cin >> writer;
	cout << " publisher : $ "; cin >> publisher;
	cout << endl;

	pobj[idx++] = new Book(price, description, isbn, title, writer, publisher);
	system("cls");
}
//��ǰ�߰� ȭ�� -> CD�߰�
void ProductHandler::ProductAddCompactDisc(void)
{
	int price;
	string description;
	string title;
	int playtime;
	string singer;
	cout << endl << endl;
	cout << " ID: " << (idx + 1) << endl;
	cout << " price : $ "; cin >> price;
	cout << " description : $ "; cin >> description;
	cout << " title : $ "; cin >> title;
	cout << " playtime : $ "; cin >> playtime;
	cout << " singer : $ "; cin >> singer;
	cout << endl;

	pobj[idx++] = new CD(price, description, title, playtime, singer);
	system("cls");
}

//��ǰ�߰� ȭ�� -> CellPhon�߰�
void ProductHandler::ProductAddCellPhone(void)
{
	int price;
	string description;
	string model;
	string manufacturer;
	cout << endl << endl;
	cout << " ID: " << (idx + 1) << endl;
	cout << " price : $ "; cin >> price;
	cout << " description : $ "; cin >> description;
	cout << " model : $ "; cin >> model;
	cout << " manufacturer : $ "; cin >> manufacturer;
	cout << endl;

	pobj[idx++] = new Cellphone(price, description, model, manufacturer);
	system("cls");
}

//��ǰ��ȸ ȭ�� -> Book ��ȸ
void ProductHandler::ShowAllBookInfo(void) const
{
	for (int i = 0; i < idx; i++)
	{
		if (pobj[i]->ProductInfo() == "BOOK")
		{
			cout << "--------------------------------" << endl;
			cout << " NO " << (i + 1) << endl;
			pobj[i]->getProduct();
			pobj[i]->Product::getProduct();
			cout << "--------------------------------" << endl;
		}
	}
}







//��ǰ��ȸ ȭ�� -> CD ��ȸ
void ProductHandler::ShowAllCDInfo(void) const
{
	cout << endl;
	for (int i = 0; i < idx; i++)
	{
		if (pobj[i]->ProductInfo() == "COMPACTDISC")
		{
			cout << "--------------------------------" << endl;
			cout << " NO " << (i + 1) << endl;
			pobj[i]->getProduct();
			pobj[i]->Product::getProduct();
			cout << "--------------------------------" << endl;
		}
	}
}

//��ǰ��ȸ ȭ�� -> Book ��ȸ
void ProductHandler::ShowAllCellPhonInfo(void) const
{
	cout << endl;
	for (int i = 0; i < idx; i++)
	{
		if (pobj[i]->ProductInfo() == "CELLPHONE")
		{
			cout << "--------------------------------" << endl;
			cout << " NO " << (i + 1) << endl;
			pobj[i]->getProduct();
			pobj[i]->Product::getProduct();
			cout << "--------------------------------" << endl;
		}
	}
}

int main(void)
{
	ProductHandler manager;
	int choice;

	while (true)
	{
		manager.ShowMenu();
		cin >> choice;

		switch (choice)
		{
		case PRODUCTADD:
			manager.AddProduct();
			break;
		case PRODUCTINQUIRY:
			manager.InquiryProduct();
			break;
		case EXIT:
			return 0;
		default:
			cout << "Illegal selection.." << endl;
		}
	}
	return 0;
}