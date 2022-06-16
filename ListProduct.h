#pragma once
#include<iostream>
#include"Product.h"
using namespace std;
#define Max 100

struct ListProduct
{
	Product list[Max];
	int number;
};

void showList(ListProduct);
void addProduct(ListProduct &, Product);
void deleteProduct(ListProduct&, Product);
Product find(ListProduct, char[]);
Product idFind(ListProduct, int);
ListProduct filterType(ListProduct, char[]);
ListProduct filterPrice(ListProduct, int, int);


