#pragma once
#ifndef __PRODUCT_H__
#define __PRODUCT_H__

#include "ProductCommonDecl.h"

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

#endif // !__PRODUCT_H__
