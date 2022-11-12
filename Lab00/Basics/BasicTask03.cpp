#include <iostream>
using namespace std;

// Take 2 integer inputs from keyboard and also ask the user for which operation to perform: ‘+’ or ‘-‘or ‘*’. Perform the appropriate operation and show the result. (Hint: you can use switch/case)

int main()
{
    int num1, num2;
    char op;

    cout << "Enter number (operand): ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter number (operand): ";
    cin >> num2;

    switch(op){
        case '+':
            cout << "Result = " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result = " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result = " << num1 * num2 << endl;
            break;
        case '/':
            cout << "Result = " << (float)num1 / num2 << endl;
            break;
        default:
            cout << "Wrong Operator" << endl;
    }

    return 0;
}
