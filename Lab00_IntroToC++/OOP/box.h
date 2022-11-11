#include <iostream>
using namespace std;


class Box{
    private:
        double width, height, length;

    public:
        Box();
        Box(double, double, double);
        double Volume();
        double OutsideSurfaceArea();
};

