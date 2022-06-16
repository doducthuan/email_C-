#include <iostream>
#include "Product.h"
#include "ListProduct.h"

using namespace std;

/*
* Function: find product in the list through name.
* Input:
*	char: name of product
* Output:
*	product has this name
*/
Product find(ListProduct listInput, char name[])
{
	Product result = Product{0, "", "", 0, 0, 0};

	for (int i = 0; i < listInput.number; i++)
	{
		if (strcmp(listInput.list[i].name, name) == 0)
		{
			result = listInput.list[i];
			break;
		}
	}
	return result;
}

Product idFind(ListProduct listInput, int id)
{
	Product result = Product{ 0, "", "", 0, 0, 0 };

	for (int i = 0; i < listInput.number; i++)
	{
		if (listInput.list[i].id == id)
		{
			result = listInput.list[i];
			break;
		}
	}
	return result;
}

/*
* Function: filter products in the list according to type.
* Input:
*	char: type of product
* Output:
*	products has this type
*/
ListProduct filterType(ListProduct listInput, char type[])
{
	ListProduct listResult={ Product{ 0, "", "", 0, 0, 0},0};
	int count = 0;
	for (int i = 0; i < listInput.number; i++)
	{
		if (strcmp(listInput.list[i].type, type) == 0)
		{
			listResult.list[count] = listInput.list[i];
			count++;
			listResult.number = count;
		}
	}
	return listResult;
}

bool checkPrice(Product input , int minPrice, int maxPrice)
{
	if (input.price >= minPrice && input.price <= maxPrice)
		return true;
	else
		return false;
}

/*
* Function: filter products according to a specific range of price
* Input:
*	char: a range of price of product
* Output:
*	products in this price range
*/
ListProduct filterPrice(ListProduct listInput, int minPrice, int maxPrice)
{
	ListProduct listResult = { Product{ 0, "", "", 0, 0, 0},0 };
	int count = 0;
	for (int i = 0; i < listInput.number; i++) {
		if (checkPrice(listInput.list[i], minPrice, maxPrice) == true) {
			listResult.list[count] = listInput.list[i];
			count++;
			listResult.number = count;
		}
	}
	return listResult;
}