#include "person.h"
#include <iostream>
int main(void)
{
    Person one;
    Person two("Symthecraft");
    Person three("Dimwiddy", "Sam");
    three.show();
    three.formal_show();

    std::cin.get();
    return 0;
}
