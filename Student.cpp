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


void Student::createName(const char *studentName);



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

void Student::setName(const char* student)
{
    // присвоювання з перевіркою довжини
    strcpy_s(name, 20, student);
}
// доступ до елементів масиву marks
int Student::getMark(int index)
{
    return marks[index];
}
void Student::setMark(int mark, int index)
{
    // присвоювання з перевіркою оцінки
    if (mark < 1 or mark > 12)
    {
        mark = 0;
    }
    marks[index] = mark;
}