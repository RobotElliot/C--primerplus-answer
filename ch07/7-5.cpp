#include <iostream>
using namespace std;
long fact(int n)
{
    if(n == 0)
        return 1;

    return n*fact(n-1);
}

int main()
{
	long res;
	int n;

	cout << "Enter number: ";
	while(cin >> n)
	{
	    res = fact(n);
	    cout << n << "! = " << res << endl;
	    cout << "Enter number: ";
	}
}
