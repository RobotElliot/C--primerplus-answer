#include <iostream>
#include <cstring>
using namespace std;

int fill_array(double ar[], int limit)
{
	double temp;
	int i;
	for(i=0; i<10; i++){
		cout<<"Please enter"<<(i+1)<<" the sorces : ";
		cin>>temp;
		if (!cin)
		{
			cin.clear();
			while(cin.get()!= '\n')continue;
			cout<<"Bad input"<<endl;
			break;
		}
		else if(temp<0)
			break;
		ar[i] = temp;
	}
	return i;
}

void display(double ar[], int length)
{
	for (int i = 0; i <length ; ++i)
		cout<<ar[i]<<endl;
}

void get_average(double ar[], int length)
{
	double average;
	for (int i = 0; i < length; ++i)
	{
		average += ar[i];
	}
	average = average/length;
	cout<<"Average is "<<average<<endl;
}
int main()
{
	int length;
	double sorces[10];
	length = fill_array(sorces,10);
	display(sorces, length);
	get_average(sorces, length);

	return 0;
}
