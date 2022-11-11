#include <iostream>
using namespace std;


int main()
{
    int rows, col, i, j;
    cout << "Enter the number of rows: ";
    cin >> rows;

    int *arrCols = new int[rows];
    int **arr2d = new int*[rows];

    cout << endl;
    for(i=0; i<rows; i++){
        cout << "Enter column size (row idx: " << i << "): ";
        cin >> col;
        *(arrCols + i) = col;
        // arrCols[i] = col;

        *(arr2d+i) = new int[col];
        // arr2d[i] = new int[cols];
    }
    cout << endl;

    for(i=0; i<rows; i++){
        for(j=0; j<*(arrCols+i); j++){ // *(arrCols+i) == arrCols[i]
            cout << "Enter value at position (" << i << ", " << j << "): ";
            cin >> *(*(arr2d + i) + j);
            // cin >> arr2d[i][j];
        }
    }

    cout << "\nPrining the elements: " << endl;
    for(i=0; i<rows; i++){
        for(j=0; j<*(arrCols+i); j++){ // *(arrCols+i) == arrCols[i]
            cout << *(*(arr2d + i) + j) << "\t";
            // cout << arr2d[i][j] << "\t";
        }
        cout << endl;
    }

    for(i=0; i<rows; i++){
        delete *(arr2d+i);
        // delete arr2d[i];
    }
    delete arr2d;

    cout << "\nPrining the elements (after deallocation): " << endl;
    for(i=0; i<rows; i++){
        for(j=0; j<*(arrCols+i); j++){ // *(arrCols+i) == arrCols[i]
            cout << *(*(arr2d + i) + j) << "\t";
            // cout << arr2d[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
