#include <iostream>
using namespace std;

class Student
{
    public:
        int rollNumber;
        
    private:
        int age;

    public:
        void display() {
            cout << age << " " << rollNumber << endl;
        }

        int getAge() {
            return age;
        }

        int setAge(int a) {
            age = a;
            return age;
        }
};

// int main() {

//     return 0;
// }