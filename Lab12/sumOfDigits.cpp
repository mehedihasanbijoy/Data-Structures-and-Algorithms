#include <iostream>
using namespace std;

int sumOfDigits(int n){
    if(n < 10){
        return n;
    }else{
        return n%10 + sumOfDigits(n/10);
    }
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int res = sumOfDigits(n);
    cout << "Result = " << res << endl;
    return 0;
}
