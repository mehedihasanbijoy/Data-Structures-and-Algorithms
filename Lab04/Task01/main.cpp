#include <iostream>
#include "unsortedtype.cpp"
using namespace std;


template <class ItemType>
void Insert(UnsortedType<ItemType> &temp, ItemType item){
    if(temp.IsFull()){
        cout << "List is full" << endl;
    }else{
        temp.InsertItem(item);
    }
}


template <class ItemType>
void Delete(UnsortedType<ItemType> &temp, ItemType item){
    if(temp.IsEmpty()){
        cout << "List is Empty" << endl;
    }else{
        temp.DeleteItem(item);
    }
}


template <class ItemType>
void Print(UnsortedType<ItemType> &temp){
    ItemType val;
    for(int i=0; i<temp.LengthIs(); i++){
        temp.GetNextItem(val);
        cout << val << ", ";
    }
    cout << endl;
    temp.ResetList();
}


template <class ItemType>
void Retrieve(UnsortedType<ItemType> &temp, ItemType item){
    bool found;
    temp.RetrieveItem(item, found);
    if(found){
        cout << "Item is found" << endl;
    }else{
        cout << "Item is not found" << endl;
    }
}


template <class ItemType>
void FindLength(UnsortedType<ItemType> &temp){
    cout << temp.LengthIs() << endl;
}


template <class ItemType>
void CheckFull(UnsortedType<ItemType> &temp){
    if(temp.IsFull()){
        cout << "List is full" << endl;
    }else{
        cout << "List is not full" << endl;
    }
}


int main()
{
    UnsortedType<int> list1 = UnsortedType<int>();

    Insert(list1, 5);
    Insert(list1, 7);
    Insert(list1, 6);
    Insert(list1, 9);

    Print(list1);

    FindLength(list1);

    Insert(list1, 1);
    Insert(list1, 90);
    Print(list1);

    Retrieve(list1, 4);
    Retrieve(list1, 5);
    Retrieve(list1, 9);
    Retrieve(list1, 10);

    CheckFull(list1);

    Delete(list1, 5);

    CheckFull(list1);

    Delete(list1, 1);

    Print(list1);

    Delete(list1, 6);

    Print(list1);

    Delete(list1, 9);
    Delete(list1, 7);

    Delete(list1, 5);

    return 0;
}
