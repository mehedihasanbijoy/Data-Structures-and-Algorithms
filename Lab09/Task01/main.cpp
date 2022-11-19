#include <iostream>
#include "queuetype.cpp"
using namespace std;


template <class T>
void CheckEmpty(QueType<T> &temp){
    if(temp.IsEmpty()){
        cout << "Queue is Empty" << endl;
    }else{
        cout << "Queue is Not Empty" << endl;
    }
}


template <class T>
void CheckFull(QueType<T> &temp){
    if(temp.IsFull()){
        cout << "Queue is Full" << endl;
    }else{
        cout << "Queue is Not Full" << endl;
    }
}


template <class T>
void EnqueueItem(QueType<T> &temp, T item){
    try{
        temp.Enqueue(item);
    }catch(FullQueue f){
        cout << "Queue Overflow" << endl;
    }
}


template <class T>
void DequeueItem(QueType<T> &temp){
    try{
        T item;
        temp.Dequeue(item);
    }catch(EmptyQueue f){
        cout << "Queue underflow" << endl;
    }
}


template <class T>
void Print(QueType<T> temp){
    T item;
    while(!temp.IsEmpty()){
        temp.Dequeue(item);
        cout << item << ", ";
    }
    cout << endl;
}


int main()
{
    QueType<int> que = QueType<int>(5);

    CheckEmpty(que);

    EnqueueItem(que, 5);
    EnqueueItem(que, 7);
    EnqueueItem(que, 4);
    EnqueueItem(que, 2);

    CheckEmpty(que);

    CheckFull(que);

    EnqueueItem(que, 6);

    Print(que);
    Print(que);

    CheckFull(que);

    EnqueueItem(que, 6);

    DequeueItem(que);
    DequeueItem(que);

    Print(que);

    DequeueItem(que);
    DequeueItem(que);
    DequeueItem(que);

    CheckEmpty(que);

    DequeueItem(que);

    return 0;
}
