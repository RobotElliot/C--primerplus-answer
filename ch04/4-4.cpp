#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
	string first_name;
	string last_name;
	string full_name;

	cout<< "Enter your first name:  ";
	getline(cin, first_name);
	cout<< "Enter your last name: ";
	getline(cin, last_name);

	full_name = last_name;
	full_name += ", ";
	full_name += first_name;

	cout<<full_name<<endl;

	return 0;
}