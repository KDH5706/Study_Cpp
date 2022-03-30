#pragma once
#ifndef __PRODUCT_HANDLER_H__
#define __PRODUCT_HANDLER_H__

#include "Product.h"

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
#endif // !__PRODUCT_HANDLER_H__
