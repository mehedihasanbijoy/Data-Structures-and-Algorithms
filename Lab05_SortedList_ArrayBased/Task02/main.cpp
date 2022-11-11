#include <iostream>
#include "sortedtype.cpp"
#include "timestamp.h"
using namespace std;

template <class T>
void Length(SortedType<T> &temp){
    cout << "Length = " << temp.LengthIs() << endl;
}

template <class T>
void Insert(SortedType<T> &temp, T newItem){
    if(temp.IsFull()){
        cout << "List is Full" << endl;
    }else{
        temp.InsertItem(newItem);
    }
}

template <class T>
void Print(SortedType<T> &temp){
    T nextItem;
    for(int i=0; i<temp.LengthIs(); i++){
        temp.GetNextItem(nextItem);
        cout << nextItem << ", ";
    }
    cout << endl;
    temp.ResetList();
}

template <class T>
void Retrieve(SortedType<T> &temp, T item){
    bool found;
    temp.RetrieveItem(item, found);
    if(found){
        cout << "Item is found" << endl;
    }else{
        cout << "Item is not found" << endl;
    }
}

template <class T>
void CheckFull(SortedType<T> &temp){
    if(temp.IsFull()){
        cout << "List is Full" << endl;
    }else{
        cout << "List is not Full" << endl;
    }
}

template <class T>
void CheckEmpty(SortedType<T> &temp){
    if(temp.IsEmpty()){
        cout << "List is Empty" << endl;
    }else{
        cout << "List is not Empty" << endl;
    }
}

template <class T>
void Delete(SortedType<T> &temp, T item){
    if(temp.IsEmpty()){
        cout << "List is Empty" << endl;
    }else{
        temp.DeleteItem(item);
    }
}

int main()
{
    SortedType<TimeStamp> st_list = SortedType<TimeStamp>();

    Length(st_list);

    CheckEmpty(st_list);

    CheckFull(st_list);

    TimeStamp t1 = TimeStamp(15,34,23);
    TimeStamp t2(13,13,02);
    TimeStamp t3(43,45,12), \
              t4(25,36,17), \
              t5(52,02,20);

    Insert(st_list, t1);
    Insert(st_list, t2);
    Insert(st_list, t3);
    Insert(st_list, t4);
    Insert(st_list, t5);

    Length(st_list);

    Print(st_list);

    TimeStamp toBeDeleted(25, 36, 17);
    Delete(st_list, toBeDeleted);

    Print(st_list);

    Length(st_list);

    CheckEmpty(st_list);

    CheckFull(st_list);

    return 0;
}
