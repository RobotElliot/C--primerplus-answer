#include <iostream>
#include "stonewt.h"
using namespace std;

int main()
{
    Stonewt arr[6] = {50, 100, 150};

    for(int i = 3; i < 6; ++i)
    {
        cout << "Stonewt[" << i << "]: ";
        double pds;
        cin >> pds;
        Stonewt st = Stonewt(pds);
        arr[i] = st;
    }
    cin.get();
    Stonewt max = arr[0], min = arr[0];
    int num = 0;
    Stonewt eleven = Stonewt(11);
    for(int i = 0; i < 6; ++i)
    {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > eleven)
            num++;
    }

    cout << "max: " << endl;
    max.show_lbs();
    cout << "min: " << endl;
    min.show_lbs();
    cout << num << "  elements > 11 stones" << endl;

    cin.get();
    return 0;
}
