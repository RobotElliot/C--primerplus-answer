#include <iostream>
using namespace std;

template <typename T>
T Max5(T num[]);

int main()
{
	int interger[5] = {1,2,3,4,5};
	double d_num[5] = {2.3,343.4,45.6,43,43.5};
	int result1;
	double result2;
	result1 = Max5(interger);
	result2 = Max5(d_num);
	cout << result1  << "  :   " << result2 <<endl;

	return 0;
}

template <typename T>
T Max5(T num[])
{
	T max = num[0];
	for (int i = 1; i < 5; ++i)
	{
		if (num[i]>max)
		{
			max = num[i];
		}
	}
	return max;
}
