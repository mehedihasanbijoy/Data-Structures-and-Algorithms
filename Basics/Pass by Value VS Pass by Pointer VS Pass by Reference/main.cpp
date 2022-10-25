#include <iostream>
using namespace std;

// pass by value
int sum1(int x, int y){
    return x + y;
}

// pass by pointer
int sum2(int *x, int *y){
    return *x + *y;
}

// pass by reference
int sum3(int &x, int &y){
    return x + y;
}


int main()
{
    int a = 10, b = 20;

    cout << "(pass by value    ) Result = " << sum1(a, b) << endl;
    cout << "(pass by pointer  ) Result = " << sum2(&a, &b) << endl;
    cout << "(pass by reference) Result = " << sum3(a, b) << endl;

    return 0;
}
