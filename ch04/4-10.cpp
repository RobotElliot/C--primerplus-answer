#include <iostream>
#include <array>

using namespace std;

int main()
{
	array<double, 3> time;
	cout<<"please enter the time of 40m: ";
	for(int i = 0; i<3; i++){
		cin>>time[i];
	}
	double avg_time = (time[0] + time[1] +time[2])/3;

	cout << avg_time<<endl;
	return 0;

}