#include<iostream>
#include"Product.h"
#include"ListProduct.h"

using namespace std;

/*
* Function: to add a product into the shopping cart
* Input:
*		list of products and product that customer want to add
* Output:
*		a new list of product conclude the new product
*/

void addProduct(ListProduct& listInput, Product add)
{
	listInput.list[listInput.number] = add;
	listInput.number += 1;
}

/*
* Function: to find index of the product that customers want to delete
* Input:
*		list of products and product that customer want to delete
* Output:
*		index of product doesn't exist the deleted product
*/
int findIndex(ListProduct listInput, Product minus)
{
	int index;
	for (int i = 0; i < listInput.number; i++)
	{
		if (listInput.list[i].id == minus.id)
		{
			index = i;
			return index;
		}
	}
}

/*
* Function: delete a product from the shopping cart
* Input: 
*		list of products and product that customer want to delete
* Output:
*		a new list of product doesn't exist the deleted product
*/

void deleteProduct(ListProduct& listInput, Product minus)
{
	int index = findIndex(listInput, minus);
	for (int i = index; i < listInput.number - 1; i++)
	{
		listInput.list[i] = listInput.list[i + 1];
	}
	listInput.number -= 1;
}
