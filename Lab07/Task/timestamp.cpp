#include "timestamp.h"

TimeStamp::TimeStamp(){
    this->s = this->m = this->h = 0;
}

TimeStamp::TimeStamp(int s, int m, int h){
    this->s = s;
    this->m = m;
    this->h = h;
}

bool TimeStamp::operator==(TimeStamp t){
    if((this->s==t.s)&&(this->m==t.m)&&(this->h==t.h))
        return true;
    else
        return false;
}

bool TimeStamp::operator< (TimeStamp t){
    if((this->h<t.h)||((this->h==t.h)&&(this->m<t.m))||((this->h=t.h)&&(this->m==t.m)&&(this->s<t.s)))
        return true;
    else
        return false;
}

bool TimeStamp::operator> (TimeStamp t){
    if((this->h>t.h)||((this->h==t.h)&&(this->m>t.m))||((this->h==t.h)&&(this->m==t.m)&&(this->s>t.s)))
        return true;
    else
        return false;
}


ostream& operator<<(ostream& OUT, TimeStamp& t){
    OUT << t.s << ":" << t.m << ":" << t.h;
    return OUT;
}
