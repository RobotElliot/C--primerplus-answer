#include <iostream>
#include <cstring>
using namespace std;
template <typename T>
T Maxn(T num[], int n);
template <> char* Maxn <char *>(char* array[], int n);

int main()
{
	int arr_int[6] = {1, 2, 3, 4, 5, 6};
	double arr_flt[4] = {10.0, 11.0, 12.0, 13.0};
	char * arr_ch[4] = {
	"shao",
	"zhengjiang",
	"haha",
	"yesyesyesgood",
	};

	cout << "Max int: " << Maxn(arr_int, 6) << endl;

	cout << "Max double: " << Maxn(arr_flt, 4) << endl;

	cout << "Max string: " << Maxn(arr_ch, 4) << endl;

	return 0;
}
template <typename T>
T Maxn(T num[], int n)
{
	T max = num[0];
	for (int i = 1; i < n; ++i)
		if (num[i]>max)
			max = num[i];
	return max;
}

template <> char* Maxn <char *>(char* array[], int n)
{
	int max = strlen(array[0]);
	char* result;
	result = array[0];
	for (int i = 0; i < n; ++i)
	{
		if(max < strlen(array[i]))
			result = array[i];
	}
	return result;
}
