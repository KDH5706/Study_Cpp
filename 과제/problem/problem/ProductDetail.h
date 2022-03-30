#pragma once
#ifndef __PRODUCT_DETAIL_H__
#define __PRODUCT_DETAIL_H__
#include "Product.h"

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

#endif // !__PRODUCT_DETAIL_H__