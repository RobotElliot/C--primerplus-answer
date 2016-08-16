#include <iostream>
#include "account.h"
using namespace std;
Account::Account()
{
	name = "";
	number = "";
	deposit = 0.0;
}

Account::Account(string name_, string number_, double deposit_)
{
	name = name_;
	number = number_;
	deposit = deposit_;
}

Account::~Account()
{
	cout<<"exit"<<endl;
}

void Account::Show()
{
	cout<<"name : "<<name<<endl;
	cout<<"number : "<<number<<endl;
	cout<<"deposit : "<<deposit<<endl;
}

void Account::Deposit(double money)
{
	if(money < 0)
		cout<<"error"<<endl;
	else{
		deposit +=money;
	}
}

void Account::Withdraw(double money)
{
	if(money < 0)
		cout<<"error"<<endl;
	else{
		deposit -= money;
	}
}


