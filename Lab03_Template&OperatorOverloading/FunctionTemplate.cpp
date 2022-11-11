#include <iostream>
using namespace std;

template <class T>
void Swap(T &x, T &y){
    T temp = x;
    x = y;
    y = temp;
}

//void Swap(int &x, int &y){
//    int temp = x;
//    x = y;
//    y = temp;
//}
//
//void Swap(float &x, float &y){
//    float temp = x;
//    x = y;
//    y = temp;
//}
//
//void Swap(char &x, char &y){
//    char temp = x;
//    x = y;
//    y = temp;
//}

int main()
{
    int ai = 10, bi = 20;
    cout << "Before Swap" << endl << "ai = " << ai << " and bi = " << bi << endl;
    Swap(ai, bi);
    cout << "After Swap" << endl << "ai = " << ai << " and bi = " << bi << endl;

    float af = 10.5, bf = 20.6;
    cout << "\nBefore Swap" << endl << "af = " << af << " and bf = " << bf << endl;
    Swap(af, bf);
    cout << "After Swap" << endl << "af = " << af << " and bf = " << bf << endl;

    char ac = 'a', bc = 'b';
    cout << "\nBefore Swap" << endl << "ac = " << ac << " and bc = " << bc << endl;
    Swap(ac, bc);
    cout << "After Swap" << endl << "ac = " << ac << " and bc = " << bc << endl;

    return 0;
}
