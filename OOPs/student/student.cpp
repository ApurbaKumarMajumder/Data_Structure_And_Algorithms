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
        Student (int r) {
            cout << "Constructor 2 called " << endl;
            rollNumber = r;
        }

        int rollNumber;
        
        void display() {
            cout << age << " " << rollNumber << endl;
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