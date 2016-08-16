#include "golf.h"
#include <iostream>

int main(void)
{
    Golf g1 = Golf("zjshao", 5);
    g1.showgolf();
    Golf g2;
    g2.showgolf();
    g2.setgolf(g1);
    g2.showgolf();

    std::cin.get();
    return 0;
}
