#include <iostream>
#include "pqtype.cpp"
using namespace std;

template <class T>
void CheckEmpty(T &pque){
    if(pque.IsEmpty())
        cout << "Queue is Empty" <<endl;
    else
        cout << "Queue is not Empty" <<endl;
}

template <class T>
void DequeueAValue(T &pque){
    int value;
    pque.Dequeue(value);
    cout << value << endl;
}

int main(){
    PQType<int> pq(15);

    CheckEmpty(pq);

    int value;
    cout << "Enter 10 items: ";
    for(int i=0; i<10; i++){
        cin >> value;
        pq.Enqueue(value);
    }

    CheckEmpty(pq);

    DequeueAValue(pq);
    DequeueAValue(pq);

    return 0;
}
