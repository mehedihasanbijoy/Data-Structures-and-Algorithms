#include <iostream>
#include "binarysearchtree.cpp"
using namespace std;

template <class T>
void CheckEmpty(TreeType<T> &tree);
template <class T>
void Retrieve(TreeType<T> &tree, T item);

int main()
{
    TreeType<int> bst;

    CheckEmpty(bst);

    cout << "Enter ten items:\n";
    for(int item, n=10, i=0; i<n; i++){
        cout << "item: ";
        cin >> item;
        bst.InsertItem(item);
    }

    CheckEmpty(bst);

    cout << bst.LengthIs() << endl;

    Retrieve(bst, 9);

    Retrieve(bst, 13);

    /// inorder
    bst.Print();

    /// preorder
    bool finished = false;
    int value;
    bst.ResetTree(PRE_ORDER);
    while(!finished){
        bst.GetNextItem(value, PRE_ORDER, finished);
        cout << value << " ";
    }
    cout << endl;

    /// postorder
    finished = false;
    bst.ResetTree(POST_ORDER);
    while(!finished){
        bst.GetNextItem(value, POST_ORDER, finished);
        cout << value << " ";
    }
    cout << endl;

    bst.MakeEmpty();

    CheckEmpty(bst);

    return 0;
}

template <class T>
void CheckEmpty(TreeType<T> &tree){
    if(tree.IsEmpty()){
        cout << "Tree is Empty" << endl;
    }else{
        cout << "Tree is not Empty" << endl;
    }
}

template <class T>
void Retrieve(TreeType<T> &tree, T item){
    bool found;
    tree.RetrieveItem(item, found);
    if(found){
        cout << "Item is found" << endl;
    }else{
        cout << "Item is not found" << endl;
    }
}



