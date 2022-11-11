#include "dynarr.h"
#include <iostream>
using namespace std;


DynArr::DynArr(){
    arr = NULL;
    length = 0;
}

DynArr::DynArr(int len){
    arr = new int[len];
    length = len;
}

DynArr::~DynArr(){
    delete [] arr;
}

int DynArr::GetValue(int idx){
    return arr[idx];
}

void DynArr::SetValue(int idx, int value){
    arr[idx] = value;
}

void DynArr::Allocate(int newLen){
    int *tempArr = new int[newLen];

    for(int i=0; i<length; i++){
        tempArr[i] = arr[i];
    }

    delete [] arr;

    arr = tempArr;
    length = newLen;
}








