#include <iostream>
#include "unsortedtype.cpp"
using namespace std;

template <class T>
void print(UnsortedType<T> &lst){
    T value;
    int length = lst.LengthIs();
    while(length > 0){
        lst.GetNextItem(value);
        cout << value << " ";
        length--;
    }
    cout << endl;
    lst.ResetList();
}


int main()
{
    UnsortedType<int> list1, list2, mergedList;

    list1.InsertItem(1); list1.InsertItem(3); list1.InsertItem(10);
    list2.InsertItem(1); list2.InsertItem(3); list2.InsertItem(6); list2.InsertItem(7); list2.InsertItem(10);

    print(list1);
    print(list2);

    int lenOfList1 = list1.LengthIs(), lenOfList2 = list2.LengthIs();

    int itemFromList1, itemFromList2;
    list1.GetNextItem(itemFromList1);
    list2.GetNextItem(itemFromList2);

    while(lenOfList1 > 0 && lenOfList2 > 0){
        if(itemFromList1 > itemFromList2){
            mergedList.InsertItem(itemFromList1);
            lenOfList1--;
            if(lenOfList1 > 0){
                list1.GetNextItem(itemFromList1);
            }
        }else if(itemFromList1 < itemFromList2){
            mergedList.InsertItem(itemFromList2);
            lenOfList2--;
            if(lenOfList2 > 0){
                list2.GetNextItem(itemFromList2);
            }
        }else{
            mergedList.InsertItem(itemFromList1);
            lenOfList1--;
            mergedList.InsertItem(itemFromList2);
            lenOfList2--;

            if(lenOfList1 > 0){
                list1.GetNextItem(itemFromList1);
            }
            if(lenOfList2 > 0){
                list2.GetNextItem(itemFromList2);
            }
        }
    }

    while(lenOfList1 > 0){
        mergedList.InsertItem(itemFromList1);
        lenOfList1--;
        if(lenOfList1 > 0){
            list1.GetNextItem(itemFromList1);
        }
    }

    while(lenOfList2 > 0){
        mergedList.InsertItem(itemFromList2);
        lenOfList2--;
        if(lenOfList2 > 0){
            list2.GetNextItem(itemFromList2);
        }
    }

    print(mergedList);

    return 0;
}
