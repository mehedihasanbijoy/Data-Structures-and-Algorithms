#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED

#include <iostream>
using namespace std;

class TimeStamp{
    private:
        int s, m, h;

    public:
        TimeStamp();
        TimeStamp(int,int,int);
        bool operator ==(TimeStamp);
        bool operator !=(TimeStamp);
        bool operator > (TimeStamp);
        bool operator < (TimeStamp);
        friend ostream& operator << (ostream&, TimeStamp&);

};

#endif // TIMESTAMP_H_INCLUDED
