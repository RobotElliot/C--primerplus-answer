#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	cout<<"Enter char ,enter @ to quit : ";
	char ch;
	cin.get(ch);
	while(ch != '@'){
		if(isupper(ch))ch = tolower(ch);
		if(islower(ch))ch = toupper(ch);
		if(!isdigit(ch))cout << ch;
		cin.get(ch);
	}
	return 0;
}
