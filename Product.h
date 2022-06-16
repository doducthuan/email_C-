#pragma once
#include<iostream>
using namespace std;

struct Product
{
	int id;
	char name[50];
	char type[20];
	float price;
	int quanity;
	bool status;
};

void enterProduct(Product&);
void showProduct(Product);