/*
C++��
�̸� : �ְ淡
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
		cout << "��ǰ ���� : " << description<<"\n";
		cout << "���� : " << price<<"\n";
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
	cout << "��ǰ ���� : " << getDes() << endl;
	cout << "å ���� : " << getName() << endl;
	cout << "���� : " << getprice() << endl;
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
	cout << "Ÿ��Ʋ�� : " << title << endl;
	cout << "���� : " << singer << endl;
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
		cout << "\n�޴� ���� : ";
		cin >> choice;
		if (choice == 1)
		{
			CaseProduct();
			cin >> choice;
			if (choice == 1)
			{
				cout << "��ǰ ���� : ";
				cin >> des;
				cout << "å ���� : ";
				cin >> name;
				cout << "���� : ";
				cin >> price;

				Book*b = new Book(des, price);
				p[idx] = b;
				idx = idx + 1;
				system("cls");
			}
			else if (choice == 2)
			{
				cout << "��ǰ ���� : ";
				cin >> des;
				cout << "Ÿ��Ʋ : ";
				cin >> title;
				cout << "���� : ";
				cin >> singer;
				cout << "���� : ";
				cin >> price;

				CD*c = new CD(price, des, title, singer);
				p[idx] = c;
				idx = idx + 1;
				system("cls");
			}
			else if (choice == 3)
			{
				cout << "��ǰ ���� : ";
				cin >> des;
				cout << "�𵨸� : ";
				cin >> model;
				cout << "���� : ";
				cin >> price;

				Cellphone*c = new Cellphone(price, des, model);
				p[idx] = c;
				idx = idx + 1;
				system("cls");
			}
			else cout << "\n�ٽ� �Է��Ͻʽÿ�.\n";
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
				cout << "BOOK ��ǰ ��ȸ\n";
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
				cout << "CD ��ǰ ��ȸ\n";
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
				cout << "CELL PHONE ��ǰ ��ȸ\n";
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
		else cout << "\n�ٽ� �Է��Ͻʽÿ�.\n";
	}
	return 0;
}

void ShowMenu()
{
	cout << "1. ��ǰ�߰�" << endl;
	cout << "2. ��ǰ��ȸ" << endl;
	cout << "3. ��    ��" << endl;
}

void CaseProduct()
{
	cout << "1. Book" << endl;
	cout << "2. CD" << endl;
	cout << "3. CellPhone" << endl;
}