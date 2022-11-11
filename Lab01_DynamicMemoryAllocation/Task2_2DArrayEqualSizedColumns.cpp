#include <iostream>
using namespace std;

int main()
{
    int rows, cols, i, j;
    cout << "Enter row and column size: ";
    cin >> rows >> cols;

    int **arr2d = new int*[rows];

    for(i=0; i<rows; i++){
        *(arr2d+i) = new int[cols];
        // arr2d[i] = new int[cols];
    }

    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            cout << "Enter value at position (" << i << ", " << j << "): ";
            cin >> *(*(arr2d + i) + j);
            // cin >> arr2d[i][j];
        }
    }

    cout << "\nPrining the elements: " << endl;
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
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
        for(j=0; j<cols; j++){
            cout << *(*(arr2d + i) + j) << "\t";
            // cout << arr2d[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
