#include <iostream>
#include "sortedtype.cpp"
#include "timestamp.h"
using namespace std;


template <class T>
void print(SortedType<T> &lst){
    T value;
    for(int i=0; i<lst.LengthIs(); i++){
        lst.GetNextItem(value);
        cout << value << " ";
    }
    cout << endl;
    lst.ResetList();
}


int main()
{
    TimeStamp t1(15,34,23), t2(13,13,02), t3(43,45,12), t4(25,36,17), t5(52,02,20);

    SortedType<TimeStamp> sorted_list;
    sorted_list.InsertItem(t1); sorted_list.InsertItem(t2);
    sorted_list.InsertItem(t3); sorted_list.InsertItem(t4);
    sorted_list.InsertItem(t5);

    print(sorted_list);

    TimeStamp toBeDeleted(25,36,17);
    sorted_list.DeleteItem(toBeDeleted);

    print(sorted_list);

    return 0;
}
