#include <iostream>
#include "stacktype.cpp"
#include <string>
using namespace std;


bool IsOperator(char ch){
    if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^'){
        return true;
    }else{
        return false;
    }
}


bool IsOperand(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return true;
    }else{
        return false;
    }
}


int Precedence(char ch){
    if(ch=='^')
        return 3;

    else if(ch=='*' || ch=='/')
        return 2;

    else if(ch=='+' || ch=='-')
        return 1;

    else
        return -1;
}


int main(){
    string infix, postfix;
    cout << "Enter infix expression: ";
    cin >> infix;

    StackType<char> st;

    for(int i=0; i<infix.length(); i++){
        /// if the character is an operand,
        /// append it to the postfix expression
        if(IsOperand(infix[i])){
            postfix += infix[i];
        }


        /// else if the character is an opening parentheses,
        /// append it to the postfix expression
        /// TODO


        /// else if the character is a closing parentheses,
        /// POP all the operators from the Stack until it encounters ‘(‘.
        /// POP the ‘(‘ too.
        /// TODO


        /// else if the character is an operator,
        /// - if the stack is empty, push it into the stack.
        /// - else check precedence and associativity: refer to the corresponding rules
        /// TODO


    } // for loop ends


    /// if stack is not empty by now,
    /// POP and append all remaining OPERATORS from the Stack to postfix expression.
    /// TODO


    cout << "Postfix expression: " << postfix << endl;

    return 0;
}
