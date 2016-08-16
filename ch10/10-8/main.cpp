#include <iostream>
#include "list.h"
using namespace std;

void addage(Item & item);

int main()
{
    List l;
    Item i = {"chenjiale", 24};
    l.additem(i);
    int n;
    n = l.itemcount();
    cout << n << " items in list" << endl;
    l.visit(addage);
    l.show();

    cin.get();
    return 0;
}

void addage(Item & item)
{
    item.age += 1;
}
