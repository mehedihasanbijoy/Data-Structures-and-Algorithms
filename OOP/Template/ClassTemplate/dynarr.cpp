#include "dynarr.h"
#include <iostream>
using namespace std;


template <class T>
DynArr<T>::DynArr(int len){
    arr = new T[len];
    length = len;
}

template <class T>
DynArr<T>::~DynArr(){
    delete [] arr;
}

template <class T>
T DynArr<T>::GetValue(int idx){
    return arr[idx];
}

template <class T>
void DynArr<T>::SetValue(int idx, T value){
    arr[idx] = value;
}
