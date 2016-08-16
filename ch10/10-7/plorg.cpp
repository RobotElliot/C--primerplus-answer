#include <iostream>
#include "plorg.h"
#include <cstring>

plorg::plorg()
{
    strcpy(name , "Plorga");
    ci = 0;
}
plorg::plorg(char * name_, int ci_)
{
    strcpy(name_ , name);
    ci_ = ci;
}
void plorg::show()
{
    std::cout << "name : "<<name << std::endl;
    std::cout << "ci : "<<ci << std::endl;
}
void plorg::setci(int ci_)
{
    ci = ci_;
}
plorg::~plorg()
{
}
