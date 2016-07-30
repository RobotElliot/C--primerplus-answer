#include <iostream>
using namespace std;

const char hour_of_day = 24;
const char min_of_hour = 60;
const char sec_of_min = 60;
int main()
{
	long long sec;
	cout << "Enter the number of seconds : ";
	cin >> sec;
	int days, hours, minutes, seconds;
	days = (((sec/hour_of_day)/min_of_hour)/sec_of_min);
	hours = (((sec - days*86400)/sec_of_min)/min_of_hour); 
	minutes = ((sec - days*86400 - hours *3600)/sec_of_min);
	seconds = sec - days*86400 - hours *3600 - minutes*60;
	cout << days << "days" << hours << "hours" << minutes << "minutes" << seconds << "seconds" << endl;
	return 0;
}
