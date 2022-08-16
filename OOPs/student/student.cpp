#include <iostream>
using namespace std;

class Student
{
    public:

        int age;

        // default constructor
        Student() {
            cout << "Constructor 1 called " << endl;
        }

        // parameterized constructor
        Student (int rollNumber) {
            cout << "Constructor 2 called " << endl;
            this -> rollNumber = rollNumber;
        }

        Student (int a, int r) {
            cout << "this " << this << endl;
            cout << "Constructor 3 called " << endl;
            age = a; // this -> age = a (optional)
            rollNumber = r;
        }

        int rollNumber;
        
        void display() {
            cout << "age : " << age << endl;
            cout << "rollNumber : " << rollNumber << endl;
        }

        int getAge() {
            return age;
        }

        void setAge(int a) {
            if (a < 0) {
                return;
            }
            age = a;
        }
};

// int main() {

//     return 0;
// }