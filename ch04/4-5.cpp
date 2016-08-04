#include <iostream>
#include <string>
using namespace std;

struct  CandyBar
{
	string brand;
	double weight;
	int calorie;
};
int main()
{
	CandyBar snack = { "Mocha Munch", 2.3, 350};
	cout << snack.brand <<endl;
	cout << snack.weight <<endl;
	cout << snack.calorie<<endl;

	return 0;
}
