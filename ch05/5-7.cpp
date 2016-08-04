#include <iostream>
#include <string>

using namespace std;

int main()
{
	struct  Car
	{
		string producer;
		int year;
	};

	int number;
	cout<< "How many cars do you wish to catalog? ";
	cin>> number;
	Car* car_name = new Car[number];
	for(int i = 0; i<number; i++){
		cout << "Car #" << i+1 <<":" << endl;
		cout <<"Please enter the make : " ;
		cin>> (car_name+i) ->producer;
		cout <<"Please enter the year made : " ;
		cin>> (car_name+i)  ->year;
	}
	cout<<"Here is your collection : "<<endl;
	for (int i = 0; i < number; ++i)
		cout <<(car_name+i)->year << "     " << (car_name+i)->producer <<endl;
	return 0;
}
