#include <iostream>
#include <string>
using namespace std;

int main()
{
	struct  donation
	{
		string name;
		double money;
	};

	int count, flag_grant = 0,flag_patrons = 0;
	cout <<"Enter the count of people : ";
	cin >> count;
	donation* record = new donation[count];
	for (int i = 0; i < count; ++i)
	{
		cout<<"Please enter the "<< i << "th person's name : ";
		cin>>(record+i)->name;		//此处不可使用record[i]， record是指针名不是数组
		cout<<"Please enter the "<< i << "th person's money : ";
		cin>>(record+i)->money;
	}

	cout<<"----------Grand Patrons------------"<<endl;
	for (int i = 0; i < count; ++i)
	{
		if ((record+i)->money > 10000)
		{
			flag_grant = 1;
			cout<<(record+i)->name<<endl;
		}
	}
	if (flag_grant == 0)cout<<"none"<<endl;
	cout<<"----------Patrons------------"<<endl;
	for (int i = 0; i < count; ++i)
	{
		if ((record+i)->money < 10000)
		{
			flag_patrons = 1;
			cout<<(record+i)->name<<endl;
		}
	}
	if (flag_patrons == 0)cout<<"none"<<endl;
	delete [] record;
	return 0;
}