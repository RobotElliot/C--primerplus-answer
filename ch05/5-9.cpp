#include <iostream>
#include <string>

using namespace std;
int getchar()
{
	string str;
	cin>>str;  	 //此处这样写就是用空格隔开输入了，而getline是取一行。
	if(str == "done")return 0;
	else 
		return 1;
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