#include <iostream>
#include "pqtype.cpp"
using namespace std;


int main(){
    int n, t, i, value, total = 0;
    cout << "Number of bags: ";
    cin >> n;
    cout << "Minutes: ";
    cin >> t;

    PQType<int> pq(n);
    cout << "Enter items: ";
    for(i=0; i<n; i++){
        cin >> value;
        pq.Enqueue(value);
    }

    for(i=0; i<t; i++){
        pq.Dequeue(value);
        total += value;
        pq.Enqueue(value/2);
    }

    cout << "Result = " << total << endl;

    return 0;
}
