#include "box.h"
#include <iostream>
using namespace std;


Box::Box(){
    this->width = this->height = this->length = 0;
}



Box::Box(double width, double height, double length){
    this->width = width;
    this->height = height;
    this->length = length;
}


double Box::double Volume(){
    /// V = H × W × L
    return this->width * this->height * this->length;
}


double Box::OutsideSurfaceArea(){
    /// OSA = 2(H × W) + 2(H × L) + 2(W × L)
    return 2 * (this->height * this->width) + \
           2 * (this->height * this->length) + \
           2 * (this->width * this->length);
}


