#include<iostream>
using namespace std;

int main(){

    /*
    //pointer to int is created, and pointing to some garbage value
    // int *p; // bad practice (so don't do any operations)

    // int *p = 0; // null pointer
    // cout<<*p<<endl;

    int i = 5;
    // int *p = &i;

    int *p = 0; // initialization of pointer(null pointer)
    p = &i; // reassigning pointer value to i's address

    cout<<p<<endl;
    cout<<*p<<endl;
    */
   
   int num = 5;
   int a = num;
   cout<<"a before "<<num <<endl;
   a++;
   cout<<"a after "<<num <<endl;

   cout<< num <<endl;

   int *p = &num;
   cout<<"before " <<num <<endl;
   (*p)++;
   cout<<"after " <<num <<endl;
   
   // copying a pointer
   int *q = p;
   cout<< p<<" - "<<q <<endl;
   cout<< *p<<" - "<<*q <<endl;

   // important concept
   int i = 3;
   int *t = &i;
   // cout<<(*t)++<<endl;

   *t = *t + 1;
   cout<<(*t)<<endl;
   cout<<"before t "<< t <<endl;
   t = t + 1;
   cout<<"after t " << t <<endl;

   return 0;
}