#include <iostream>
#include "dynarr.cpp"
using namespace std;

template <class T>
void print(DynArr<T> &a, int s){
    for(int i=0; i<s; i++){
        cout << a.GetValue(i) << ", ";
    }
    cout << endl;
}

int main()
{
    DynArr<float> arr_float = DynArr<float>(3);
    arr_float.SetValue(0, 5.4);
    arr_float.SetValue(1, 3.5);
    arr_float.SetValue(2, 7.7);
    print(arr_float, 3);

    DynArr<int> arr_int = DynArr<int>(3);
    arr_int.SetValue(0, 5);
    arr_int.SetValue(1, 3);
    arr_int.SetValue(2, 7);
    print(arr_int, 3);

    DynArr<char> arr_char = DynArr<char>(3);
    arr_char.SetValue(0, 'a');
    arr_char.SetValue(1, 's');
    arr_char.SetValue(2, 'd');
    print(arr_char, 3);

    return 0;
}
