#include"Product.h"
using namespace std;

void enterProduct(Product& input)
{
	cout << "Enter id of product: ";
	cin >> input.id;
	cout << "Enter name of product: ";
	gets(input.name);
	fflush(stdin);
	cout << "Enter price of product: ";
	cin >> input.price;
	cout << "Enter quanity of product: ";
	cin >> input.quanity;
	cout << "Enter type of product: ";
	gets(input.type);
	cout << "Enter status of product: ";
	cin >> input.status;
}

void showProduct(Product input)
{
	cout << "Id: " << input.id << endl;
	cout << "Name: " << input.name << endl;
	cout << "Price: " << input.price << endl;
	cout << "Quanity: " << input.quanity << endl;
	cout << "Type: " << input.type << endl;
	cout << "Status: " << input.status << endl;
}