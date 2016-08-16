#include "stack.h"

Stack::Stack(int n)
{
    items = new Item[n];
    top = 0;
    size = n;
}
Stack::Stack(const Stack & st)
{
    size = st.size;
    top = st.top;
    items = new Item[size];
    for (int i = 0; i < top; ++i)
    {
        *(items+i) = *(st.items+i);
    }

}
Stack::~Stack(){
    delete [] items;
}
bool Stack::isempty() const
{
    return top == 0;
}
bool Stack::isfull() const
{
    return top == MAX;
}
// push() returns false if stack already is full, true otherwise
bool Stack::push(const Item & item)
{
    if (top < MAX)
    {
        *(items+top) = item;
        top++;
        return true;
    }
    else
        return false;
}
// pop() returns false if stack already is empty, true otherwise
bool Stack::pop(Item & item)
{
    if (top>0)
    {
        top--;
        item = *(items+top);
        return true;
    }
    else
        return false;
}
Stack & Stack::operator=(const Stack & st)
{
    size = st.size;
    top = st.top;
    delete [] items;
    items = new Item[size];
    for (int i = 0; i < top; ++i)
    {
        *(items+i) = *(st.items+i);
    }
    return *this;
}
