#include <iostream>
#include <cstring>

using namespace std;

struct stringy{
    char * str;
    int ct;
};
void set(stringy & str1, char* str2);
void show(const stringy & str1, int n = 1);
void show(const char* str1, int n = 1);
int main(void)
{
	stringy beauy;
	char testing[] = "Reality isn't what it used to be.";

	set(beauy, testing);
	show(beauy);
	show(beauy, 3);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 2);
	show("Done!");

	return 0;
}

void set(stringy & str1, char* str2)
{
	int len = strlen(str2);
	str1.str = new char[len];
	strcpy(str1.str, str2);
	str1.ct = len;
}

void show(const stringy & str1, int n)
{
	while(n > 0)
	{
		cout<<str1.str<<endl;
		n--;
	}
}
void show(const char* str1, int n)
{
	while(n > 0)
	{
		cout<<str1<<endl;
		n--;
	}
}
