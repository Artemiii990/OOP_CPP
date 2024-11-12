#include "Student.h"
using namespace std;


Student::Student(const char *studentName,
    const int *studentMarks,
    int studentMarksCount) {

    setName(studentName);

    marks = new int[studentMarksCount];

    for (int i = 0; i < studentMarksCount; i++) {
        marks[i] = studentMarks[i];
    }
    marksCount = studentMarksCount;
}


void Student::createName(const char *studentName) {
    int nameLength = strlen(studentName);
    name = new char[nameLength + 1];
    for (int i = 0; i <= nameLength; i++) {
        name[i] = studentName[i];
    }
}


// реализація методу обчислення среднього бала
double Student::getAvg(){
    double sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum+=marks[i];
    }
    return sum/3;
}


const char* Student::getName()
{
    return name;
}

void Student::setName(const char *studentName) {
    // присвоювання з перевіркою довжини
    //strcpy_s(name, 20, studentName);
    delete[] name;
    createName(studentName);
}
int Student::getMark(int index)
{
    return marks[index];
}
void Student::setMark(int mark, int index)
{
    if (index < 0 || index >= marksCount) {
        return;
    }
    // присвоювання з перевіркою оцінки
    if (mark < 1 or mark > 12)
    {
        mark = 0;
    }
    marks[index] = mark;
}