#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
	struct  donation
	{
		string name;
		double money;
	};

	ifstream inFile;
	inFile.open("patrons.txt");
	if(!inFile.is_open())exit(EXIT_FAILURE);

	int count,flag_grant = 0,flag_patrons = 0 ;
	inFile >> count;
	cout<< count<<endl;
	inFile.get();

	donation* record = new donation[count];
	for (int i = 0; i < count; ++i)
	{
		getline(inFile, (record+i)->name);	//这里不能用get，否则读取到空格就停止了。
		inFile>>(record+i)->money;
		inFile.get();
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