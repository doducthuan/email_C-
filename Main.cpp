#pragma once
#include <iostream>
#include<cstdio>
#include "Product.h"
#include "ListProduct.h"
#include "data.h"
#include "Bill.h"
using namespace std;

void main()
{
	Bill purchase;
	cout << "List of product in the shop: \n";
	showList(listInput);

	char choice;
	do {
		cout << "What do you want to do next: \n";
		cout << "A. Do you want to find some products?\n";
		cout << "B. Do you want to see details of product? \n";
		cout << "C. Do you want to see the list of products in the shopping cart? \n";
		cout << "D. Do you want to make payment?\n";
		cout << "E. Quit\n";
		cout << "Your choice: ";
		cin >> choice;
		switch (choice) {
		case 'A':
			cout << "You want to find through: (1. Name/ 2. Type/ 3. Price) \n";
			cout << "Your choice: ";
			int option;
			cin >> option;

			switch (option) {
			case 1:
				char name[50];
				cout << "Please enter name of product: ";
				cin.ignore();
				gets(name);

				cout << "Result of your finding: \n";
				Product result = find(listInput, name);
				if (result.id == 0)
					cout << "Cannot find this product\n";
				else
					showProduct(result);
				break;
			case 2:
				char type[20];
				cout << "Please enter type of product: ";
				cin.ignore();
				gets(type);

				cout << "Results of your finding: \n";
				showList(filterType(listInput, type));
				break;
			case 3:
				float maxPrice, minPrice;
				cout << "Enter the range of price you want: \n";
				cout << "Min: ";
				cin >> minPrice;
				cout << "Max: ";
				cin >> maxPrice;

				cout << "Results of your finding: \n";
				showList(filterPrice(listInput, minPrice, maxPrice));
				break;
			}
			break;
		case 'B':
			int id;
			cout << "Type id of product that you want to see details: ";
			cin >> id;

			cout << "Your result: ";
			Product result = idFind(listInput, id);
			showProduct(result);

			cout << "What do you want to do next: \n";
			cout << "1. Add product to the shopping cart\n";
			cout << "2. Back to the list of products\n";
			cout << "Your choice: ";
			int selection;
			cin >> selection;
			switch (selection) {
			case 1:
				cout << "New list in the shopping cart after adding: \n";
				addProduct(listInCart, idFind(listInput, id));
				showList(listInCart);
				break;
			case 2:
				showList(listInput);
				break;
			}
			break;
		case 'C':
			cout << "List of products in your shopping cart: \n";
			showList(listInCart);

			int answer1;
			cout << "Do you want to adjust this list? (1. Yes/2. No)\n";
			cout << "Your choice: ";
			cin.ignore();
			cin >> answer1;

			if (answer1 == 1) {
				cout << "what do you want to adjust? (1. Number/2. Delete) \n";
				cout << "Your choice: ";
				int answer2;
				cin >> answer2;

				if (answer2 ==1 ) {
					int newNumber;
					cout << "Enter new number: ";
					cin >> newNumber;
					listInCart.number = newNumber;
				}
				else if (answer2 == 2) {
					int id;
					cout << "Enter id of product that you want to delete: ";
					cin >> id;

					deleteProduct(listInCart, idFind(listInCart, id));

					cout << "New list in the shopping cart: \n";
					showList(listInCart);
				}
			}
			break;
		case 'D':
			purchase.listBuy = listInCart;
			purchase.id = 1;
			purchase.quantity = purchase.listBuy.number;
			cout << "Do you want to make payment? \n";
			cout << "1. Yes\n";
			cout << "2. No \n";
			int response;
			cout << "Your choice: ";
			cin >> response;
			if (response == 1) {
				enterBill(purchase);
				cout << "Do you want to log in to get 5% voucher ?\n";
				cout << "1. Yes\n";
				cout << "2. No\n";
				int reply;
				cin >> reply;
				if (reply == 1) {
					cout << "1. (sig up) or 2. (log in)\n";
					int rep;
					cout << "Your choice: ";
					cin >> rep;
					switch (rep) {
					case 1:
						signUp(listUsers);
						break;
					case 2:
						logIn(listUsers);
						break;
					}
					
					purchase.totalMoney = (sum(purchase.listBuy) / 100) * 95;
					cout << "Your invoice: \n";
					showBill(purchase);
				}
				else {
					purchase.totalMoney = sum(purchase.listBuy);
					cout << "Your invoice: \n";
					showBill(purchase);
				}
			}
		}

	} while (choice != 'E');

		system("pause");
}