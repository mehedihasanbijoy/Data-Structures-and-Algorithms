#include "studentinfo.h"
#include <iostream>
using namespace std;

StudentInfo::StudentInfo(){
    this->id = -1;
    this->name = "No name";
    this->cgpa = -1;
}

StudentInfo::StudentInfo(int id){
    this->id = id;
}

StudentInfo::StudentInfo(int id, string name, double cgpa){
    this->id = id;
    this->name = name;
    this->cgpa = cgpa;
}

bool StudentInfo::operator==(StudentInfo tempStudent){
    if(this->id == tempStudent.id){
        return true;
    }else{
        return false;
    }
}

bool StudentInfo::operator!=(StudentInfo tempStudent){
    if(this->id != tempStudent.id){
        return true;
    }else{
        return false;
    }
}

ostream &operator<<(ostream &OUT, StudentInfo &tempStudent){
    OUT << tempStudent.id << ", " << tempStudent.name << ", " << tempStudent.cgpa << endl;
    return OUT;
}




