#include <iostream>
using namespace std;

int main()
{
	double f_Daphne = 100, f_Cleo = 100;
	int year = 0;
	do{
		f_Daphne += 10;
		f_Cleo += f_Cleo*0.05;
		year++;
	}while(f_Daphne > f_Cleo);

	cout<<"After " << year <<", fund of Daphne is " << f_Daphne << " and fund of Cleo is " << f_Cleo << endl;
	return 0;
}