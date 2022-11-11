#include "unsortedtype.h"

template <class ItemType>
UnsortedType<ItemType>::UnsortedType(){
    this->length = 0;
    this->currentPos = -1;
}

template <class ItemType>
void UnsortedType<ItemType>::MakeEmpty(){
    this->length = 0;
}

template <class ItemType>
void UnsortedType<ItemType>::ResetList(){
    this->currentPos = -1;
}

template <class ItemType>
bool UnsortedType<ItemType>::IsFull(){
    return this->length == MAX_ITEMS;
}

template <class ItemType>
int UnsortedType<ItemType>::LengthIs(){
    return this->length;
}

template <class ItemType>
void UnsortedType<ItemType>::InsertItem(ItemType newItem){
    this->arr[this->length] = newItem;
    this->length++;
}

template <class ItemType>
void UnsortedType<ItemType>::DeleteItem(ItemType item){
    int idx = 0;
    while(this->arr[idx] != item){
        idx++;
    }
    this->arr[idx] = this->arr[this->length-1];
    this->length--;
}

template <class ItemType>
void UnsortedType<ItemType>::GetNextItem(ItemType &item){
    item = this->arr[++this->currentPos];
}

template <class ItemType>
void UnsortedType<ItemType>::RetrieveItem(ItemType &item, bool &found){
    int idx = 0;
    bool moreToSearch = idx < this->length;
    found = false;

    while(moreToSearch && !found){
        if(item == this->arr[idx]){
            item = this->arr[idx];
            found = true;
        }else{
            ++idx;
            moreToSearch = idx < this->length;
        }
    }
}
