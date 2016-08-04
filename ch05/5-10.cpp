#include <iostream>
using namespace std;

int main()
{
	int line_count;
	cout<<"Enter the count of line :" ;
	cin >> line_count;
	for(int i = 0; i<line_count; i++){
		for(int j=0; j<5-i; j++){
			cout <<".";
		}
		for(int k=i; k>0; k--)
			cout << "*";
		cout <<endl;
	}
	return 0;
}
