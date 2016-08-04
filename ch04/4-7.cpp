#include <iostream>
#include <string>
using namespace std;

struct Croporation
{
	string name;
	double diameter;
	double weight;
};

int main()
{
	Croporation p;
    
	cout << "Enter company name: ";
	getline(cin, p.name);
	cout << "Enter diameter of pizza: ";
	cin >> p.diameter;
	cout << "Enter weight of pizza: ";
	cin >> p.weight;

	cout << "Company: " << p.name << endl;
	cout << "Diameter: " << p.diameter << endl;
	cout << "Weight:" << p.weight << endl;

	return 0;
}