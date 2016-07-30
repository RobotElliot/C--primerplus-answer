#include <iostream>
using namespace std;

const double Inch_per_feet = 12.0L;
const double Meter_per_inch = 0.0254;
const double kilo_per_bang =  2.2;
int main()
{
	double ht_feet, ht_inch, ht_meter;
	int weight;
	
	cout << "please input your height of feet " << endl;
	cin >> ht_feet;
	cout << "please input your height of inch " << endl;
	cin >> ht_inch;
	cout << "please input your weight of bang " << endl;
	cin >> weight;
	
	ht_meter = (ht_feet*Inch_per_feet + ht_inch) * Meter_per_inch;
	weight *= kilo_per_bang;
	
	cout << "your height is " << ht_meter <<endl;
	cout << "your weight is " << weight << endl;
	
	return 0;
} 
