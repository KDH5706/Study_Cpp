#include "ProductCommonDecl.h"
#include "ProductHandler.h"
#include "Product.h"
#include "ProductDetail.h"

//static 변수 초기화
int ProductHandler::idx = 0;

//생성자
ProductHandler::ProductHandler()
{
	for (int i = 0; i < 100; i++)
		pobj[i] = NULL;
}

//소멸자
ProductHandler::~ProductHandler()
{
	for (int i = 0; i < idx; i++)
		delete pobj[i];
}

//메인화면
void ProductHandler::ShowMenu(void) const
{
	cout << endl << endl;
	cout << " +++++++++++++++ POS ++++++++++++++++" << endl << endl;
	cout << "  1. 상품추가" << endl;
	cout << "  2. 상품조회" << endl;
	cout << "  3. 종    료" << endl << endl;
	cout << "  $ : ";
}

//메인화면 -> 상품추가 화면
void ProductHandler::AddProduct(void)
{
	system("cls");

	int sel;
	cout << endl << endl;
	cout << "  추가상품선택 :" << endl;
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

//상품추가 화면 -> Book추가
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

//상품추가 화면 -> CD추가
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

//상품추가 화면 -> CellPhon추가
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

//메인화면 -> 상품조회 화면
void ProductHandler::InquiryProduct()
{
	system("cls");

	int sel;
	cout << endl << endl;
	cout << " 조회상품 선택 :" << endl;
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

//상품조회 화면 -> Book 조회
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

//상품조회 화면 -> CD 조회
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

//상품조회 화면 -> Book 조회
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
