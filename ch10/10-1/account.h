#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <string>
using namespace std;

class Account
{
private:
	string name;
	string number;
	double deposit;
public:
	Account();
	Account(string name, string number, double deposit);
	void Deposit(double money);
	void Show();
	void Withdraw(double money);
	~Account();
};

#endif
