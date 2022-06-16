#pragma once
#include <iostream>
//#include "data.h"
#include "ListProduct.h"
#include "Product.h"
#include "user.h"
using namespace std;

struct Date {
	int date;
	int month;
	int year;
};

struct Bill {
	int id;
	Date date;
	char nameCustomer[50];
	char address[50];
	char paymentMethod[50];
	int quantity;
	float totalMoney;
	ListProduct listBuy;
};

void enterBill(Bill&);
void showBill(Bill&);
float sum(ListProduct);
