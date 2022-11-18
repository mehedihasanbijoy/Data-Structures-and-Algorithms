#include <iostream>
#include "stacktype.cpp"
#include <string>
using namespace std;


int main()
{
    StackType<char> st;
    string sequence;
    cout << "Input: ";
    cin >> sequence;

    for(int i=0; i<sequence.length(); i++){
        if(sequence[i] == '('){
            st.Push(sequence[i]);
        }else{
            try{
                st.Pop();
            }catch(EmptyStack estack){
                cout << "Unbalanced Sequence" << endl;
                return 0;
            }
        }
    }

    if(st.IsEmpty()){
        cout << "Balanced Sequence" << endl;
    }else{
        cout << "Unbalanced Sequence" << endl;
    }

    return 0;
}
