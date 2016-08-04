#include <iostream>
using namespace std;

int main()
{
	double donation[10];
	cout<<"Please enter the number( at most input 10) : ";
	int i = 0;
	while(i<10 && cin >> donation[i]){
		if(++i<10)
			cout << "the " << i <<"number is " << donation[i-1] << endl;
	}
	double total = 0.0;
	for (int j = 0; j < i; ++j)
		total += donation[j];
	if(i==0)cout<< "no donation";
	else
		cout << "the average is "<< total / i << endl;
	return 0; 
}