#include <iostream>
#include <cmath>
using namespace std;

int findmin(int arr[], int len, int smallest){
    if(len < 0){
        return smallest;
    }else{
        if(smallest > arr[len]){
            smallest = arr[len];
        }
        findmin(arr, --len, smallest);
    }
}

int main()
{
    int arr[5] = {-1, 5, 3, 0, 2};
    int res = findmin(arr, 5-1, arr[0]);
    cout << "Result: " << res << endl;

    return 0;
}
