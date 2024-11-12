#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <sec_api/string_s.h>

#endif //STUDENT_H

using namespace std;

class Student{

    //data members - змінні классу
private: // модифікатор доступу (інкапсуляція)
    char* name;
    int marksCount;
    int* marks;

public:
    //member function - функція классу
    double getAvg();

    void createName(const char* studentName);

    // доступ до поля name
    const char* getName();
    void setName(const char* studentName);

    // доступ до елементів масиву marks
    int getMark(int index);
    void setMark(int mark, int index);

    Student();

    Student(const char* studentName, const int* studentMarks, int studentMarksCount);

    ~Student();

};