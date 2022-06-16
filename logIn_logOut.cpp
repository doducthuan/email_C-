#include <iostream>
#include<cstdio>
#include "user.h"
using namespace std;

bool checkLogIn(user list[], char inputInfor[], char pass[])
{
	for (int i = 0; i < 6; i++)
	{
		if (strcmp(list[i].userName, inputInfor) == 0)
		{
			if (strcmp(list[i].passWord, pass) == 0)
				return true;
		}
		else if (strcmp(list[i].telephoneNumber, inputInfor) == 0)
		{
			if (strcmp(list[i].passWord, pass) == 0)
				return true;
		}
	}
	return false;
}

bool checkEmail(user list[], char email[])
{
	for (int i = 0; i < 6; i++)
	{
		if (strcmp(list[i].email, email) == 0)
			return true;
	}
	return false;
}

bool checkExist(user list[], char input[])
{
	for (int i = 0; i < 6; i++)
	{
		if (strcmp(list[i].userName, input) == 0)
			return true;
		else if (strcmp(list[i].email, input) == 0)
			return true;
		else if (strcmp(list[i].telephoneNumber, input) == 0)
			return true;
	}
	return false;
}

bool checkCode(char code[])
{
	char OTP[10] = "qm273";
	if (strcmp(OTP, code) == 0)
		return true;
	else
		return false;
}

void logIn(user Input[])
{
	char inputInfor[30], pass[30];

	bool result;
	do {
		cout << "Type your username or phone number: ";
		cin.ignore();
		gets(inputInfor);
		fflush(stdin);
		cout << "Your password: ";
		cin.ignore();
		gets(pass);
		fflush(stdin);
		result = checkLogIn(Input, inputInfor, pass);
		if (result == true) {
			cout << "Logged in successfully!\n";
			break;
		}
		else {
			cout << "Loggin failed!\n";
			cout << "1. Do you want to try again ?\n";
			cout << "2. Did you forget your password?\n";
			cout << "Your choice: ";
			int choice;
			cin >> choice;
			switch (choice) {
			case 1:
				cout << "You need to enter again !\n";
				break;
			case 2:
				bool result1;
				do {
					cout << "Please enter your email: ";
					char email[30];
					cin.ignore();
					gets(email);
					fflush(stdin);
					result1 = checkEmail(Input, email);
					if (checkEmail(Input, email) == true)
					{
						cout << "This is your new password: 210406\n";
						cout << "You have 5 seconds to see and after that you need to type it again.\n";
						cout << "New password: ";
						int newPassword;
						cin >> newPassword;
					}
					else
						cout << "This email is incorrect. Try again !\n ";
				} while (result1 == false);
				break;
			}
		}

	} while (result = false);
}


void signUp(user listIn[])
{
	char userName[30], email[30], phoneNumber[15], pass[20], code[10];
	bool result1;
	do {
		cout << "Type username: ";
		cin.ignore();
		gets(userName);
		fflush(stdin);
		result1 = checkExist(listIn, userName);
		if (result1 == true)
			cout << "This username already exists. Please use another one!\n";
		else
			break;
	} while (result1 = true);

	bool result2;
	do {
		cout << "Type email: ";
		cin.ignore();
		gets(email);
		fflush(stdin);
		result2 = checkExist(listIn, email);
		if (result2 == true)
			cout << "This email already exists. Please use another one!\n";
		else
			break;
	} while (result2 = true);

	bool result4;
	do {
		cout << "Type phonenumber: ";
		cin.ignore();
		gets(email);
		fflush(stdin);
		result4 = checkExist(listIn, phoneNumber);
		if (result4 == true)
			cout << "This phonenumber was already used. Please use another one!\n";
		else
			break;
	} while (result4 = true);

	cout << "Type password: ";
	cin.ignore();
	gets(pass);
	fflush(stdin);
	cout << "Type the code was sent to your email to reconfirm password.\n";
	bool result3;
	do {
		cout << "Code: ";
		cin.ignore();
		gets(code);
		fflush(stdin);
		result3 = checkCode(code);
		if (result3 == false)
			cout << "Incorrect ! Type again\n";
		else
			cout << "Succeed !\n";
	} while (result3 = false);
}