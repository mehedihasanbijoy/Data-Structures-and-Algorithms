#include <iostream>
#include "sortedtype.cpp"
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
    SortedType<int> st_list = SortedType<int>();
    Length(st_list);
    Insert(st_list, 5);
    Insert(st_list, 7);
    Insert(st_list, 4);
    Insert(st_list, 2);
    Insert(st_list, 1);
    Print(st_list);
    Print(st_list);
    Retrieve(st_list, 6);
    Retrieve(st_list, 5);
    CheckEmpty(st_list);
    CheckFull(st_list);
    Delete(st_list, 1);
    Print(st_list);
    CheckFull(st_list);

    return 0;
}
