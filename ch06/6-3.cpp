#include <iostream>
using namespace std;

int main()
{
	cout << "Please enter one of the following choices: "<<endl;
	cout << "c) carnivore"<<"                        "<< "p) pianist"<<endl;
	cout << "t) tree"<<"                             "<< "g) game"<<endl;
	char ch,flag = 1;
	cin>> ch;
	while(flag)
	{
		switch(ch)
		{
			case 'c':
				cout << "carnivore"<<endl;
				flag = 0;
				break;
			case 'p':
				cout << "pianist"<<endl; 
				flag = 0;
				break;
			case 't': 
				cout << "tree"<<endl;
				flag = 0;
				 break;
			case 'g':
				cout<<"game"<<endl;
				flag = 0;
				break;
			default:
				cout<<"Please enter a c,p,t, or g : ";
				cin>>ch;
				break;
		}
	}
	return 0;
}