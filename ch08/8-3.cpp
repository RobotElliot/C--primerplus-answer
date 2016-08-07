#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void to_upper(string & str)
{
    for(int i = 0; i < str.size(); ++i)	//size()返回的是unsigned int类型，和int比较会有警告，不过不影响运行
    {
        if(isalpha(str[i]))
            str[i] = toupper(str[i]);
    }
}

int main()
{
	string str;
	cout<<"Enter a string(q to quit) : ";
	getline(cin, str);
	while(str !="q")		//注意此处是双引号
	{
		to_upper(str);
		cout<<str<<endl;
		cout<<"Next string (q to quit) : ";
		getline(cin, str);
	}
	cout<<"Bye."<<endl;
	return 0;
}
