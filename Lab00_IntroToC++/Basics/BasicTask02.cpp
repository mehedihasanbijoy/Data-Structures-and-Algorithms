#include <iostream>
using namespace std;

// Take an integer from keyboard and find its factorial.

int main()
{
    int n, fact = 1;
    cout << "Enter n: ";
    cin >> n;

    for(int i=n; i>=1; i--){
        fact *= i;
    }

    cout << n << "! = " << fact << endl;

    return 0;
}
