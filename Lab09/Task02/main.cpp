#include <iostream>
#include "queuetype.cpp"
#include <string>
using namespace std;

int main()
{
    int n;
    string s1, s2;
    cout << "Enter N: ";
    cin >> n;

    QueType<string> que = QueType<string>(n+1);
    que.Enqueue("1");

    while(n--){
        que.Dequeue(s1);
        cout << s1 << endl;

        s2 = s1;
        que.Enqueue(s1.append("0"));
        que.Enqueue(s2.append("1"));
    }

    return 0;
}
