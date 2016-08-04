#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
	ifstream inFile;
	char ch;
	int count = 0;
	inFile.open("test.txt");
	if(!inFile.is_open())exit(EXIT_FAILURE);

	inFile >> ch;
	while(inFile.good())
	{
		inFile >> ch;
		count++;
	}

	inFile.close();
	cout << "There are " << count << " word "<<endl;
	return 0;
}