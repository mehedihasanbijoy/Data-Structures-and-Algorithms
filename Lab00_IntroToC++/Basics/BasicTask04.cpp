#include <iostream>
using namespace std;

//Write a function isPrime(int n)  which checks if ‘n’ is prime or not. Use this function to print all the prime numbers between 300 to 500.

bool isPrime(int x){
    bool flag = true;
    for(int i=2; i<=x/2; i++){
        if(x%i == 0){
            flag = false;
            break;
        }
    }
    return flag;
}


int main()
{
    int lb, ub;

    cout << "Enter lower and upper bound: ";
    cin >> lb >> ub;

    cout << "Prime numbers between " << lb << " and " << ub << " are: ";
    for(int i=lb; i<=ub; i++){
        if(isPrime(i)){
            cout << i << ", ";
        }
    }

    return 0;
}
