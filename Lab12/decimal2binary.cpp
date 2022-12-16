#include <iostream>
#include <cmath>
using namespace std;

void dec2bin(int n){
    if(n==0){
        return;
    }else{
        dec2bin(n/2);
        cout << n%2;
    }
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Decimal " << n << " is Binary ";
    dec2bin(n);

    return 0;
}
