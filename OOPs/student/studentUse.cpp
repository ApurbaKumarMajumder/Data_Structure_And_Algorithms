#include <iostream>
#include "student.cpp"
using namespace std;

int main()
{

    // creating objects statically
    Student s1;
    Student s2;
    Student s3, s4, s5;

    // creating objects dynammically
    Student *s6 = new Student;

    // setting values of the properties of an object
    s1.age = 24;
    s1.rollNumber = 100;

    cout << s1.age << endl;
    cout << s1.rollNumber << endl;

    (*s6).age = 23;
    (*s6).rollNumber = 30;

    s6 -> age = 23;
    s6 -> rollNumber = 30;

    return 0;
}