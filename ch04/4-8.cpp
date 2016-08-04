#include  <iostream>
using namespace std;

struct Croporation
{
	string name;
	double diameter;
	double weight;
};

int main()
{
	Croporation* pizza = new Croporation;

	cout << "Enter company name: ";
	cin>>pizza->name;
	cout << "Enter diameter of pizza: ";
	cin >> pizza->diameter;
	cout << "Enter weight of pizza: ";
	cin >> pizza->weight;

	cout << "Company: " << pizza->name << endl;
	cout << "Diameter: " << pizza->diameter << endl;
	cout << "Weight:" << pizza->weight << endl;

    	return 0;
}
