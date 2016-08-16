#include "move.h"
#include <iostream>
using namespace  std;

Move::Move(double a, double b)
{
    x = a;
    y = b;
}
void Move::showmove() const
{
    cout<<"x : " << x<<"  y : "<<y <<endl;
}
Move Move::add(const Move & m) const
{
    Move move = Move(m.x + x, m.y +y);
    return move;
}
void Move::reset(double a, double b)
{
    x = a;
    y = b;
}
