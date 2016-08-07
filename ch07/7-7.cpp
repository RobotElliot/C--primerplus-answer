#include <iostream>
using namespace std;
const int Max = 5;
double* Fill_array(double* start , int length);
void Show_array(double* start , double* end);
void revalue(double r,double* start , double* end);

int main()
{
	double properties[Max];

	// fill array
	double * end = Fill_array(properties, Max);
	// output array
	Show_array(properties, end);

	if(end > properties)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while(!(cin >> factor))
		{
		    cin.clear();
		    while(cin.get() != '\n')
		        continue;
		    cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, properties, end);
		Show_array(properties, end);
	}

	cout << "Done.\n" << endl;
	return 0;

}
double* Fill_array(double* start , int length)
{
	double temp;
	int i;
	for(i=0; i<length; i++){
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
		*(start+i) = temp;
	}
	return start + i ;
}
void Show_array(double* start , double* end)
{
	double* pt;
	for (pt = start; pt != end; ++pt)
		cout<<*pt<<endl;
}
void revalue(double r,double* start , double* end)
{
	double* pt;
	for (pt = start; pt != end; ++pt)
		*pt = *pt * r;
}
