#include <iostream>
using namespace std;


class Box{
    private:
        double width, height, length;

    public:
        Box(){
            this->width = this->height = this->length = 0;
        }

        Box(double width, double height, double length){
            this->width = width;
            this->height = height;
            this->length = length;
        }

        double Volume(){
            /// V = H × W × L
            return this->width * this->height * this->length;
        }

        double OutsideSurfaceArea(){
            /// OSA = 2(H × W) + 2(H × L) + 2(W × L)
            return 2 * (this->height * this->width) + \
                   2 * (this->height * this->length) + \
                   2 * (this->width * this->length);
        }
};


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
