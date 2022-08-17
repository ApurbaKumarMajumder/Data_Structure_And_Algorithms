#include <iostream>
#include "student.cpp"
using namespace std;

int main() {

/*
    // Constructor
        // Default Constructor
            // 1. Same name as class name
            // 2. No return type
            // 3. No input argument
        
        // constructors are for initialization of an object with default values (garbage values).
    


    Student s1;
    s1.display();

    Student s2; // default construction will be called
    s2.display();

    Student *s3 = new Student;
    s3 -> display();

    cout << "Parameterised constructor demo " << endl;
    Student s4(10); // parammeterized construction will be called
    s4.display();

    Student *s5 = new Student(20);
    s5 -> display();

    Student s6(10, 100);
    s6.display();

*/

/*
    // Student s1(10, 1000);
    // cout << "Address of s1 " << &s1 << endl;

    // Student s2(100);
    // s2.display();
*/

/*
    Student s1(10, 100); // parameterised constructor (it's user defined)
    cout << "S1 : ";
    s1.display();
    cout << endl;
    
    // static object creation
    Student s2(s1); // copy constructor (builtin)
    cout << "S2 : ";
    s2.display();
    cout << endl;

    // dynamic object creation
    Student *s3 = new Student(20, 200);
    cout << "S3 : ";
    s3 -> display();

    Student s4(*s3);
    Student *s5 = new Student(*s3);
    Student *s6 = new Student(s1);
*/

/*
    Student s1(10, 100);
    Student s2(20, 200);

    Student *s3 = new Student(30, 300);

    s2 = s1; // copy assignment operator
    *s3 = s1;
    s2 = *s3;

    // in static object creation default destructor will be called at the end of program
    // but for dynamic object creation we have to call the destructor

    delete s3; // dynamic object
*/
  
    Student s1; // constructor 1 called

    Student s2(100); // constructor 2 called

    Student s3(10, 100); // constructor 3 called

    Student s4(s3); // copy constructor called
    s1 = s2;    // copy assignment operator called (as objects are already created)

    Student s5 = s3; // copy constructor
    // Student s5; // default
    // s5 = s3; // copy operator
    return 0;
}