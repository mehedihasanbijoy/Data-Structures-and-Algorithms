#include <iostream>
#include "box.h"
using namespace std;


int main()
{
    Box box1 = Box();
    cout << "Volume = " << box1.Volume() << \
            "\nOutside Surface Area = " << box1.OutsideSurfaceArea() << endl;

    Box box2 = Box(1, 2, 3);
    cout << "\nVolume = " << box2.Volume() << \
            "\nOutside Surface Area = " << box2.OutsideSurfaceArea() << endl;

    return 0;
}