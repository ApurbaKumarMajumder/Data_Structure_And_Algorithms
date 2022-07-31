#include <iostream>
using namespace std;

# define PI 3.14

inline int getMax(int& a, int& b) {
    return (a>b) ? a : b;
}

int score = 15;

void a(int& i) {

    cout << score << " in a" << endl;
    score++;
    char ch = 'a';
    cout << i << endl;
}

void print(int arr[], int n  , int start = 0) {

    for(int i = start; i<n; i++) {
        cout << arr[i] << endl;
    }

}

void b(int& i) {
    cout << score << " in b" << endl;
    cout << i << endl;
}

int main() {

    int r = 5;
    double pi = 3.14;

    double area = PI * r * r;

    cout << "Area is " << area << endl;

    // Macro: It is a piece of code in a program that is replaced by value of macro

    // no extra storage like it is required for declaring a variable

    // Inline Function

    int a = 1, b = 2;
    int ans = 0; 

    ans = getMax(a,b);
    cout << ans << endl;

    a = a + 3;
    b = b + 1;

    ans = getMax(a,b);
    cout << ans << endl;

    // global Variable

    cout << score << " in main" << endl;
    int i = 5;
    a(i);
    b(i);

    // default arguments
    int arr[5] = {1,4,7,8,9};
    int size = 5;

    print(arr, size);
    cout << endl;
    print(arr, size, 2);

    return 0;
}