#include <cstring>
#include <cctype>
#include "string2.h"
using std::cin;
using std::cout;

// initializing static class member

int String::num_strings = 0;

// static method
int String::HowMany()
{
    return num_strings;
}

// class methods
String::String(const char * s)     // construct String from C string
{
    len = std::strlen(s);          // set size
    str = new char[len + 1];       // allot storage
    std::strcpy(str, s);           // initialize pointer
    num_strings++;                 // set object count
}

String::String()                   // default constructor
{
    len = 4;
    str = new char[1];
    str[0] = '\0';                 // default string
    num_strings++;
}

String::String(const String & st)
{
    num_strings++;             // handle static member update
    len = st.len;              // same length
    str = new char [len + 1];  // allot space
    std::strcpy(str, st.str);  // copy string to new location
}

String::~String()                     // necessary destructor
{
    --num_strings;                    // required
    delete [] str;                    // required
}

void String::stringlow()
{
    int i=0;
    while(str[i] != '\0')
    {
        if(isupper(str[i]))
            str[i] = tolower(str[i]);
        i++;
    }
}
void String::stringup()
{
    int i=0;
    while(str[i] != '\0')
    {
        if(islower(str[i]))
            str[i] = toupper(str[i]);
        i++;
    }
}
int String::has(char ch) const
{
    int i=0;
    int num = 0;
    while(str[i] != '\0')
    {
        if(str[i] == ch)
            num++;
        i++;
    }
    return num;
}
// overloaded operator methods

    // assign a String to a String
String & String::operator=(const String & st)
{
    if (this == &st)
        return *this;
    delete [] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}

    // assign a C string to a String
String & String::operator=(const char * s)
{
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

    // read-write char access for non-const String
char & String::operator[](int i)
{
    return str[i];
}

    // read-only char access for const String
const char & String::operator[](int i) const
{
    return str[i];
}
String String::operator+(const String & s) const
{
    int len = std::strlen(str) + std::strlen(s.str);
    char * str_sum = new char[len];
    std::strcpy(str_sum, str);
    std::strcat(str_sum, s.str);
    String str_new = str_sum;
    delete [] str_sum;
    return str_new;
}
String String::operator+(const char * s) const
{
 /*   int len = std::strlen(str) + std::strlen(s);
    char * str_sum = new char[len];
    std::strcpy(str_sum, str);
    std::strcat(str_sum, s);
    String str_new = str_sum;
    delete [] str_sum;
    return str_new;*/
    String temp = s;
    String sum = *this + temp;
    return sum;
}
// overloaded operator friends

bool operator<(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2)
{
    return st2 < st1;
}

bool operator==(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}

    // simple String output
ostream & operator<<(ostream & os, const String & st)
{
    os << st.str;
    return os;
}

    // quick and dirty String input
istream & operator>>(istream & is, String & st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}

String operator+(const char * st1, const String & st2)
{
        int len = std::strlen(st1) + std::strlen(st2.str);
        char * str_sum = new char[len];
        std::strcpy(str_sum, st1);
        std::strcat(str_sum, st2.str);
        String str_new = str_sum;
        delete [] str_sum;
        return str_new;
}

