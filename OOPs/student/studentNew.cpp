#include <iostream>
#include "student.cpp"
using namespace std;

int main() {

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
}