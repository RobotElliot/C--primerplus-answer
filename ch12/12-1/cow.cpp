#include "cow.h"
#include <cstring>
#include <iostream>
using namespace std;

Cow::Cow()
{
    name[0] = '\0';
    hobby = NULL;
    weight = 0.0;
}
Cow::Cow(const char * nm, const char * ho, double wt)
{
    strcpy(name, nm);
   int len;
    len = strlen(ho);
    hobby = new char[len];
    strcpy(hobby, ho);
//    hobby = ho;      //如果ho不是const参数可以采用此句，只不过赋值时会有string赋给char*的警告
    weight = wt;
}
Cow::Cow(const Cow & c)
{
    strcpy(name, c.name);
    int len;
    len = strlen(c.hobby);
    hobby = new char[len];
    strcpy(hobby, c.hobby);
    weight = c.weight;

}
Cow & Cow::operator=(const Cow & c)
{
    strcpy(name, c.name);
    delete [] hobby;
    int len;
    len = strlen(c.hobby);
    hobby = new char[len];
    strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}
void Cow::show() const
{
    cout << "name: " << name << endl;
    cout << "hobby: " << hobby << endl;
    cout << "weight: " << weight << endl;
}
