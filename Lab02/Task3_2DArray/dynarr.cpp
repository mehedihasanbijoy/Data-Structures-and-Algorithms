#include "dynarr.h"
#include <iostream>
using namespace std;


DynArr::DynArr(){
    this->arr = NULL;
    this->rows = this->cols = 0;
}

DynArr::DynArr(int rows, int cols){
    this->rows = rows;
    this->cols = cols;

    this->arr = new int*[this->rows];

    for(int i=0; i<this->rows; i++){
        *(this->arr + i) = new int[this->cols];
        // this->arr[i] = new int[this->cols];
    }
}

DynArr::~DynArr(){
    for(int i=0; i<this->rows; i++){
        delete [] *(this->arr + i);
        // delete [] this->arr[i];
    }

    delete [] this->arr;
}

int DynArr::GetValue(int row, int col){
    return *(*(this->arr + row) + col);
    // return this->arr[row][col];
}

void DynArr::SetValue(int row, int col, int value){
    *(*(this->arr + row) + col) = value;
    // this->arr[row][col] = value;
}

void DynArr::Allocate(int newRow, int newCol){
    // dynamically allocating a new 2d array
    int **tempArr = new int*[newRow];
    for(int i=0; i<newRow; i++){
        *(tempArr + i) = new int[newCol];
        /// tempArr[i] = new int[newCol];
    }

    // coping values from previous 2d array to this new reallocated 2d array
    for(int i=0; i<this->rows; i++){
        for(int j=0; j<this->cols; j++){
            *(*(tempArr + i) + j) = *(*(this->arr + i) + j);
            /// tempArr[i][j] = this->arr[i][j];
        }
    }

    // deallocating the previous array
    for(int i=0; i<this->rows; i++){
        delete [] *(this->arr + i);
        /// delete [] this->arr[i];
    }
    delete [] this->arr;

    // pointing the array pointer of the class to the newly created array
    this->arr = tempArr;

    // updating the rows and columns
    this->rows = newRow;
    this->cols = newCol;
}


