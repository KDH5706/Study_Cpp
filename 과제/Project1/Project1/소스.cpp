/*
C++평가
이름 : 최경래
2022.03.28
*/
#include <iostream>
#include <string>
using namespace std;

void ShowMenu();
void CaseProduct();

class Product
{
	int price;
	string description;
public:
	Product(){	}
	Product(string des, int price)
	{
		this->price = price;
		this->description = des;
	}
	virtual void getProduct() 
	{
		cout << "상품 설명 : " << description<<"\n";
		cout << "가격 : " << price<<"\n";
	};
	int getprice() { return price; }
	string getDes() { return description; }
	virtual string ProductInfo() { return 0; }
};

class Book : public Product
{
	string bookname;
public:
	Book(string description, int price) : Product(description, price)
	{
		this->bookname = bookname;
	}
	void getProduct();
	string getName() { return bookname; }
	string ProductInfo() { return "BOOK"; }
};

void Book::getProduct()
{
	cout << "상품 설명 : " << getDes() << endl;
	cout << "책 제목 : " << getName() << endl;
	cout << "가격 : " << getprice() << endl;
}

class CD :public Product
{
	string cdname;
	string title;
	string singer;
public:
	CD(int price, string description, string title, string singer) : Product(description, price)
	{
		this->title = title;
		this->singer = singer;
	}
	void getProduct();
	string ProductInfo() { return "CD"; }
};

void CD::getProduct()
{
	cout << "타이틀명 : " << title << endl;
	cout << "가수 : " << singer << endl;
}

class Cellphone : public Product
{
	string Model;
public:
	Cellphone(int price, string description, string Model) : Product(description, price)
	{
		this->Model = Model;
	}
	void getProduct();
	string ProductInfo() { return "CELL PHONE"; }
};

void Cellphone::getProduct()
{
	cout << "Model : " << Model;
}

int main()
{
	Product *p[100];
	int choice;
	int idx = 0;
	int price;
	string name, des, title, singer, model;

	while (1)
	{
		ShowMenu();
		cout << "\n메뉴 선택 : ";
		cin >> choice;
		if (choice == 1)
		{
			CaseProduct();
			cin >> choice;
			if (choice == 1)
			{
				cout << "상품 설명 : ";
				cin >> des;
				cout << "책 제목 : ";
				cin >> name;
				cout << "가격 : ";
				cin >> price;

				Book*b = new Book(des, price);
				p[idx] = b;
				idx = idx + 1;
				system("cls");
			}
			else if (choice == 2)
			{
				cout << "상품 설명 : ";
				cin >> des;
				cout << "타이틀 : ";
				cin >> title;
				cout << "가수 : ";
				cin >> singer;
				cout << "가격 : ";
				cin >> price;

				CD*c = new CD(price, des, title, singer);
				p[idx] = c;
				idx = idx + 1;
				system("cls");
			}
			else if (choice == 3)
			{
				cout << "상품 설명 : ";
				cin >> des;
				cout << "모델명 : ";
				cin >> model;
				cout << "가격 : ";
				cin >> price;

				Cellphone*c = new Cellphone(price, des, model);
				p[idx] = c;
				idx = idx + 1;
				system("cls");
			}
			else cout << "\n다시 입력하십시오.\n";
		}
		else if (choice == 2)
		{
			cout << "1. Book" << endl;
			cout << "2. CD" << endl;
			cout << "3. CellPhone" << endl;
			cin >> choice;
			system("cls");
			if (choice == 1)
			{
				cout << "BOOK 상품 조회\n";
				for (int i = 0; i < idx; i++)
				{
					if (p[i]->ProductInfo() == "BOOK")
					{
						p[i]->Product::getProduct();
						p[i]->getProduct();
						printf("\n");
					}
				}
			}
			else if (choice == 2)
			{
				cout << "CD 상품 조회\n";
				for (int i = 0; i < idx; i++)
				{
					if (p[i]->ProductInfo() == "CD")
					{
						p[i]->Product::getProduct();
						p[i]->getProduct();
						printf("\n");
					}
				}
			}
			else if (choice == 3)
			{
				cout << "CELL PHONE 상품 조회\n";
				for (int i = 0; i < idx; i++)
				{
					if (p[i]->ProductInfo() == "CELL PHONE")
					{
						p[i]->Product::getProduct();
						p[i]->getProduct();
						printf("\n");
					}
				}
			}
		}
		else if (choice == 3)
		{
			break;
		}
		else cout << "\n다시 입력하십시오.\n";
	}
	return 0;
}

void ShowMenu()
{
	cout << "1. 상품추가" << endl;
	cout << "2. 상품조회" << endl;
	cout << "3. 종    료" << endl;
}

void CaseProduct()
{
	cout << "1. Book" << endl;
	cout << "2. CD" << endl;
	cout << "3. CellPhone" << endl;
}