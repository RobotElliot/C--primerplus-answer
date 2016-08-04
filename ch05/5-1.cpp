#include <iostream>
using namespace std;

int main()
{
	int interger1,interger2,total = 0;
	cout>>"Enter two interger: "
	cin>>interger1>>interger2;
	for(int i = interger1; i<=interger2; i++){
		total +=i;
	}
	cout<< total<<endl;
	return 0;
}