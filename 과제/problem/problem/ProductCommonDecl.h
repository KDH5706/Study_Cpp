#pragma once
#ifndef __PRODUCT_COMMON_H__
#define __PRODUCT_COMMON_H__

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <string>
#include <vector>

using namespace std;

//프로그램 사용자의 선택 메뉴
enum { PRODUCTADD = 1, PRODUCTINQUIRY, EXIT };

//제품의 종류
enum { BOOK = 1, COMPACTDISC, CELLPHONE };

#endif // !__PRODUCT_COMMON_H__
