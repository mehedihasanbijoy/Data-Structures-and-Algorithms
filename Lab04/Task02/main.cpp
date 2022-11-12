#include <iostream>
#include "unsortedtype.cpp"
#include "studentinfo.h"
using namespace std;


template <class ItemType>
void Print(UnsortedType<ItemType> &temp){
    ItemType student;
    for(int i=0; i<temp.LengthIs(); i++){
        temp.GetNextItem(student);
        cout << student;
    }
    cout << endl;
    temp.ResetList();
}


template <class ItemType>
void Retrieve(UnsortedType<StudentInfo> &temp, ItemType &student){
    bool found;
    temp.RetrieveItem(student, found);

    if(found){
        cout << "Item is found" << endl;
        cout << student << endl;
    }else{
        cout << "Item is not found\n" << endl;
    }
}


template <class ItemType>
void CheckFull(UnsortedType<ItemType> &temp){
    if(temp.IsFull()){
        cout << "List is Full\n" << endl;
    }else{
        cout << "List is not Full\n" << endl;
    }
}


int main()
{
    StudentInfo student1 = StudentInfo(1, "Mehedi", 3.10);
    StudentInfo student2 = StudentInfo(2, "Hasan", 2.31);
    StudentInfo student3 = StudentInfo(3, "Bijoy", 1.99);
    StudentInfo student4 = StudentInfo(4, "Idehem", 1.20);
    StudentInfo student5 = StudentInfo(5, "Yojib", 3.54);

    UnsortedType<StudentInfo> listOfStudents = UnsortedType<StudentInfo>();
    listOfStudents.InsertItem(student1);
    listOfStudents.InsertItem(student2);
    listOfStudents.InsertItem(student3);
    listOfStudents.InsertItem(student4);
    listOfStudents.InsertItem(student5);

    Print(listOfStudents);

    CheckFull(listOfStudents);

    StudentInfo studentX = StudentInfo(1);
    listOfStudents.DeleteItem(studentX);

    Print(listOfStudents);

    Retrieve(listOfStudents, studentX);

    Retrieve(listOfStudents, student3);

    CheckFull(listOfStudents);

    Print(listOfStudents);

    return 0;
}




















/// Task 01
//template <class ItemType>
//void Print(UnsortedType<ItemType> &temp){
//    ItemType val;
//    for(int i=0; i<temp.LengthIs(); i++){
//        temp.GetNextItem(val);
//        cout << val << ", ";
//    }
//    cout << endl;
//    temp.ResetList();
//}
//
//
//template <class ItemType>
//void Retrieve(UnsortedType<ItemType> &temp, ItemType item){
//    bool found;
//    temp.RetrieveItem(item, found);
//    if(found){
//        cout << "Item is found" << endl;
//    }else{
//        cout << "Item is not found" << endl;
//    }
//}
//
//
//template <class ItemType>
//void FindLength(UnsortedType<ItemType> &temp){
//    cout << temp.LengthIs() << endl;
//}
//
//
//template <class ItemType>
//void CheckFull(UnsortedType<ItemType> &temp){
//    if(temp.IsFull()){
//        cout << "List is full" << endl;
//    }else{
//        cout << "List is not full" << endl;
//    }
//}
//
//
//int main()
//{
//    UnsortedType<int> list1 = UnsortedType<int>();
//    list1.InsertItem(5);
//    list1.InsertItem(7);
//    list1.InsertItem(6);
//    list1.InsertItem(9);
//    Print(list1);
//    FindLength(list1);
//    list1.InsertItem(1);
//    Print(list1);
//    Retrieve(list1, 4);
//    Retrieve(list1, 5);
//    Retrieve(list1, 9);
//    Retrieve(list1, 10);
//    CheckFull(list1);
//    list1.DeleteItem(5);
//    CheckFull(list1);
//    list1.DeleteItem(1);
//    Print(list1);
//    list1.DeleteItem(6);
//    Print(list1);
//
//    return 0;
//}
