#include <iostream>
#include <cstring>
using namespace std;
int getchar()
{
	char temp[20];
	cin >> temp;
	char *pn = new char[strlen(temp) +1];
	strcpy(pn, temp);
	return strcmp(pn, "done");
}
int main()
{
	int flag;
	int count = 0;
	cout<<"Enter characters; enter done to quit" << endl;
	flag = getchar();
	while(flag != 0)
	{
		flag = getchar();
		count++;
	}
	cout<<"Your entered a total of " << count << " words." <<endl;
}