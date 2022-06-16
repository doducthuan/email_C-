#pragma once
#include <iostream>
using namespace std;

struct user {
	char userName[50];
	char telephoneNumber[15];
	char passWord[50];
	char email[50];
};

bool checkLogIn(user listUsers[], char inputInfor[], char pass[]);
void logIn(user[]);
void signUp(user[]);
bool checkEmail(user listUsers[], char email[]);
bool checkExist(user list[], char input[]);
bool checkCode(char code[]);
