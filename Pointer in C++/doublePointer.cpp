#include <iostream>
using namespace std;

int main(){

    int i = 5;
    int *ptr = &i;
    int ** ptr2 = &ptr;

    cout<<endl<<endl<<"Sub sahi chal rha h "<<endl<<endl;

    cout<<"printing ptr "<<ptr <<endl;
    cout<<"address of i "<<&i <<endl;

    cout<<"address of ptr "<<&ptr<<endl;
    cout<<"printing ptr2 "<<ptr2 <<endl;

    cout<<"address of ptr2 "<<&ptr2<<endl;


    cout<< *ptr2 <<endl;

    // value of i
    cout<< i<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr2<<endl;

    return 0;
}