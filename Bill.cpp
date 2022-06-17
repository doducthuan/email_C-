# include <iostream>
#include <iomanip>
#include "Bill.h"
using namespace std;

void enterBill(Bill& purchase)
{
	cout << "Please fill your information in this invoice!\n";

	cout << "Date: ";
	cin >> purchase.date.date;
	cout << "Month: ";
	cin >> purchase.date.month;
	cout << "Year: ";
	cin >> purchase.date.year;

	cout << "Name: ";
	cin.ignore();
	gets(purchase.nameCustomer);
	fflush(stdin);

	cout << "Address: ";
	gets(purchase.address);
	fflush(stdin);

	cout << "Payment method: ";
	gets(purchase.paymentMethod);
	fflush(stdin);
}

void showBill(Bill &purchase)
{
	cout << setw(30) << "Date: " << setw(43) << purchase.date.date << "/" << purchase.date.month << "/" << purchase.date.year << endl;
	cout << "------------------------------------------------------------------------------------------------------------\n";
	cout << setw(30) << "id: " << setw(50) << purchase.id << endl;
	cout << "------------------------------------------------------------------------------------------------------------\n";
	cout << setw(30) << "Name of customer: " << setw(50) << purchase.nameCustomer << endl;
	cout << "------------------------------------------------------------------------------------------------------------\n";
	cout << setw(30) << "Address: " << setw(50) << purchase.address << endl;
	cout << "------------------------------------------------------------------------------------------------------------\n";
	cout << setw(30) << "Payment method: " << setw(50) << purchase.paymentMethod << endl;
	cout << "------------------------------------------------------------------------------------------------------------\n";
	cout << setw(30) << "Quantity product: " << setw(50) << purchase.quantity << endl;
	cout << "------------------------------------------------------------------------------------------------------------\n";
	cout << setw(30) << "Total money: " << setw(50) << purchase.totalMoney << endl;
	cout << "------------------------------------------------------------------------------------------------------------\n";
	cout << "List products you buy: \n";
	showList(purchase.listBuy);
}

float sum(ListProduct listInCart1)
{
	float sum = 0;
	for (int i = 0; i < listInCart1.number; i++)
	{
		sum = sum + listInCart1.list[i].price;
	}
	return sum;
}


