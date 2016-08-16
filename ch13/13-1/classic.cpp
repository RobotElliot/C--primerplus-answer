#include "classic.h"
#include <cstring>
#include <iostream>
using namespace  std;

Cd::Cd(const char * s1, const char * s2, int n, double x)
{
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}
Cd::Cd()
{
    performers[0] = '\0';
    label[0] = '\0';
    selections = 0;
    playtime = 0;
}
Cd::~Cd() {

}
void Cd::Report() const
{
    cout << "performers: " << performers << endl;
    cout << "label: " << label << endl;
    cout << "selections: " << selections << endl;
    cout << "playtime: " << playtime << endl;
}

Classic::Classic(const char * w, const char * s1, const char * s2, int n, double x):Cd(s1,s2,n,x)
{
    strcpy(works, w);
}
Classic::Classic()
{
     works[0] = '\0';
}
Classic::~Classic() {

}
void Classic::Report() const
{
    Cd::Report();
    cout << "works: " << works << endl;
}
