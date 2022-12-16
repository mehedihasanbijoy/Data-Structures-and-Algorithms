#include <iostream>
using namespace std;

void odd();
void even();

int x = 1;

void odd(){
    if(x <= 10){
        cout << x+1 << ", ";
        x++;
        even();
    }
    return;
}

void even(){
    if(x <= 10){
        cout << x-1 << ", ";
        x++;
        odd();
    }
    return;
}


int main()
{
    odd();

    return 0;
}
