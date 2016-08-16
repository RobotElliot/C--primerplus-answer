#include <iostream>
#include "account.h"
using namespace std;

int main()
{
	Account person("Tom", "1234567", 3400);
	person.Show();
	person.Deposit(100);
	person.Show();
	person.Withdraw(100);
	person.Show();

	cin.get();
	return 0;
}
