#include "ProductCommonDecl.h"
#include "Product.h"

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

string Product::ProductInfo()
{
	return " ";
}