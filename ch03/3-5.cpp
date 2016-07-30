#include <iostream>
using namespace std;

int main()
{
	long long pop_of_US, pop_of_world;
	long double percentage;
	cout << "Enter the world's population: ";
	cin >> pop_of_world;
	cout << "Enter the population of the US: ";
	cin >> pop_of_US;
	percentage = pop_of_US;
	percentage = ((percentage/pop_of_world)*100);
	cout << "The population of the US is " << percentage <<"% of the world population.";
	
	return 0;
}
