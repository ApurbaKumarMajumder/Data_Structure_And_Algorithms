#include<iostream>
using namespace std;

int main(){

    int num = 5;
    cout<<num<<endl;

    // address of Operator - &
    cout<<"address of num is "<<&num<<endl;

    int *ptr = &num;

    cout<< "Value is : "<<*ptr<<endl;
    cout<< "Address is : "<<ptr<<endl;

    double d = 4.2;
    double *ptr2 = &d;

    cout<< "Value is : "<<*ptr2<<endl;
    cout<< "Address is : "<<ptr2<<endl;

    cout<<"Size of integer is "<<sizeof(num)<<endl;
    cout<<"size of pointer is "<<sizeof(ptr)<<endl;
    cout<<"size of pointer is "<<sizeof(ptr2)<<endl;

    return 0;
}