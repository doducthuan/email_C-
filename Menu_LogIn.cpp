//#include <iostream>
//#include "user.h"
//using namespace std;
//
//void logIn()
//{
//	char inputInfor[30], pass[30];
//
//	bool result;
//	do {
//		cout << "Type your username or phone number: ";
//		cin.ignore();
//		gets_s(inputInfor);
//		cout << "Your password: ";
//		cin.ignore();
//		gets_s(pass);
//		result = checkLogIn(listUsers, inputInfor, pass);
//		if (result == true)
//			cout << "Logged in successfully!\n";
//		else {
//			cout << "Loggin failed!\n";
//			cout << "1. Do you want to try again ?\n";
//			cout << "2. Did you forget your password?\n";
//			cout << "Your choice: ";
//			int choice;
//			cin >> choice;
//			if (choice == 2)
//			{
//				bool result1;
//				do {
//					cout << "Please enter your email: ";
//					char email[30];
//					cin.ignore();
//					gets_s(email);
//					if (checkEmail(listUsers, email) == true)
//					{
//						cout << "This is your new password: 210406\n";
//						cout << "You have 5 seconds to see and after that you need to type it again.\n";
//						cout << "New password: ";
//						int newPassword;
//						cin >> newPassword;
//					}
//					else
//						cout << "This email is incorrect. Try again !\n ";
//				} while (result = false);	
//			}
//		}
//			
//	} while (result = false);
//}
//
//
//void signIn()
//{
//	char userName[30], email[30], phoneNumber[15], pass[20], code[10];
//	bool result1;
//	do {
//		cout << "Type username: ";
//		cin.ignore();
//		gets_s(userName);
//		result1 = checkExist(listUsers, userName);
//		if (result1 == true)
//			cout << "This username already exists. Please use another one!\n";
//	} while (result1 = true);
//
//	bool result2;
//	do {
//		cout << "Type email: ";
//		cin.ignore();
//		gets_s(email);
//		result2 = checkExist(listUsers, email);
//		if (result2 == true)
//			cout << "This email already exists. Please use another one!\n";
//	} while (result2 = true);
//
//	bool result4;
//	do {
//		cout << "Type phonenumber: ";
//		cin.ignore();
//		gets_s(email);
//		result4 = checkExist(listUsers, phoneNumber);
//		if (result4 == true)
//			cout << "This phonenumber was already used. Please use another one!\n";
//	} while (result4 = true);
//
//	cout << "Type password: ";
//	cin.ignore();
//	gets_s(pass);
//	cout << "Type the code was sent to your email to reconfirm password.\n";
//	bool result3;
//	do {
//		cout << "Code: ";
//		cin.ignore();
//		gets_s(code);
//		result3 = checkCode(code);
//		if (result3 == false)
//			cout << "Incorrect ! Type again\n";
//		else
//			cout << "Succeed !\n";
//	} while (result3 = false);
//}
