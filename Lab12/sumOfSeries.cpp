#include <iostream>
#include <cmath>
using namespace std;

float sumOfSeries(int n){
    if(n == 0){
        return 1;
    }else{
        return 1./pow(2, n) + sumOfSeries(n-1);
    }
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    float res = sumOfSeries(n);
    cout << "Result = " << res << endl;
    return 0;
}
