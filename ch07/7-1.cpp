#include <iostream>
using namespace std;


double get_average(double n1, double n2)
{
	return 2.0*n1*n2/(n1+n2);
}

int main()
{
	double num1, num2, result;
	cout<<"Enter two number : ";
	cin>>num1>>num2;

	while(num1 && num2)
	{
		result = get_average(num1, num2);
		cout<<"Average is " <<result<<endl;
		cout<<"Enter two number: ";
		cin>>num1>>num2;
	}

	return 0;
}
