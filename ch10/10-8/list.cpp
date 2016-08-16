#include "list.h"
#include <string>
#include <iostream>
using namespace std;

List::List()
{
    count = 0;
}
bool List::isempty() const
{
    return count == 0;
}
bool List::isfull() const
{
    return count == MAX;
}
int List::itemcount() const
{
    return count;
}
bool List::additem(const Item & item)
{
    if (count<MAX)
    {
        items[count++] = item;
//        count++;
        return true;
    }
    else{
        return false;
    }

}
void List::visit(void (*pf)(Item &))
{
    for (int i = 0; i < count; ++i)
    {
        (*pf)(items[i]);
    }
}
void List::show()
{
    for (int i = 0; i < count; ++i)
    {
        cout<<"name : "<<items[i].name<<endl;
        cout << "age : "<<items[i].age<<endl;
    }
}
List::~List()
{

}
