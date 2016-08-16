#include <iostream>
using namespace std;

const double Inch_per_feet = 12.0L;

int main()
{
	cout << "please input your height" << endl;
	double ht_inch;
	cin >> ht_inch;
	double ht_feet =  ht_inch/Inch_per_feet;
	cout << "your height is  " << ht_feet << endl;
	return 0;
}
