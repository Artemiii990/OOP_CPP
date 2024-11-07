#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <sec_api/string_s.h>

#endif //STUDENT_H

using namespace std;

class Student{

private:
    //data members - змінні классу
    //// модифікатор доступу (інкапсуляція)
       char* name;
       int* marks;
       int marksCount;

    public:

    //member function - функція классу
    double getAvg();

    const char* getName();

    void setName(const char* studentName);

    void setMark(int mark, int index);

    int getMark(int index);

    Student(){
        cout<<"Конструктор студента"<<"\n";
    }

    Student(const char* studentName, const int* studentMarks, int studentMarksCount);

};