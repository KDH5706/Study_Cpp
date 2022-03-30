#include "ProductCommonDecl.h"
#include "ProductHandler.h"
#include "Product.h"
#include "ProductDetail.h"

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
void ProductHandler::AddProduct(void)
{
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

//����ȭ�� -> ��ǰ��ȸ ȭ��
void ProductHandler::InquiryProduct()
{
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
