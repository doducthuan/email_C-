#include <iostream>
using namespace std;

struct M
{
	int m[50];
	int number;
};

void add(M & input, int x)
{
	input.m[input.number] = x;
	input.number += 1;
} 

void main()
{
	M input = { {1, 2, 3}, 3 };
	add(input, 5);
	cout << input.m[3];
	cout << input.number;

}