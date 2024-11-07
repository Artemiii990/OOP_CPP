#include <iostream>
#include <windows.h>
#include <conio.h>
#include "Student.h"
using namespace std;

int main(){
    system("chcp 65001");
cout<<"Успішність студента"<<endl<<endl;

Student student("Artem");//створення об'єкту классу

cout<<"Після виклику конструктора"<<"\n";

// student.marks[0] = 11;
// student.marks[1] = 9;
// student.marks[2] = 7;

student.setMark(11, 0);
student.setMark(8, 1);
student.setMark(10, 2);

double resAver = student.getAvg();


cout<<student.getName()<<" : "<<"Середній бал = "<<resAver<<"\n";

}
