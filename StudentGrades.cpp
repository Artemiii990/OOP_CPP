#include <iostream>
#include <windows.h>
#include <conio.h>

#include "Student.h"
using namespace std;

int main() {
    system("chcp 65001");

    // setlocale(LC_ALL, "RU");

    cout<<"Успішність студента"<<endl<<endl;

    Student student("Artem", new int[3]{11,9,7}, 3);//створення об'єкту классу

    cout<<"Після виклику конструктора"<<"\n";

    //strcpy_s(student.name, 21, "Lukas");
    // student.marks[0] = 11;
    // student.marks[1] = 9;
    // student.marks[2] = 7;

    // student.setMark(11,0);
    // student.setMark(9,1);
    // student.setMark(7,2);

    double resAver = student.getAvg();



    cout<<student.getName()<<" : "<<"Середній бал = "<<resAver<<"\n";


    const int size = 2;

    Student* students = new Student[size] {
        Student("Kevin", new int[3]{12,5,9}, 3),
          Student("Bob", new int[3]{10,12,3}, 3)
    };

    for(Student* stud = students; stud < students + size; stud++){
        cout << stud->getName()<<": Середній балл: "<<stud->getAvg()<<endl;
    }
}