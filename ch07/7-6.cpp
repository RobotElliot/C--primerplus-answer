#include <iostream>
using namespace std;

const int LENGTH = 10;

int Fill_array(double ar[], int length);
void Show_array(double ar[], int length);
void Reverse_array(double ar[], int length);

int main()
{
	double array[LENGTH];
	int length = Fill_array(array, LENGTH);
	Show_array(array, length);
	Reverse_array(array, length);
	Show_array(array, length);
	return 0;
}

int Fill_array(double ar[], int length)
{
	double temp;
	int i;
	for(i=0; i<LENGTH; i++){
		cout<<"Please enter the "<<(i+1)<<" number : ";
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
void Show_array(double ar[], int length)
{
	for (int i = 0; i < length; ++i)
		cout<<ar[i]<<endl;
}
void Reverse_array(double ar[], int length)
{
	double temp;
	for (int i = 0; i < length/2; ++i)
	{
		temp = ar[i];
		ar[i] = ar[length-i-1];
		ar[length-i-1] = temp;
	}
}
