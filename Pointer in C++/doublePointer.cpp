#include <iostream>
using namespace std;

void update(int **ptr2){
    // ptr2 = ptr2 + 1;
    //kuch change hoga kya -> NO

    // *ptr2 = *ptr2 + 1;
    // kuch change hoga kya -> YES

    **ptr2 = **ptr2 + 1;
    // kuch change hoga -> YES
}

int main(){

    int i = 5;
    int *ptr = &i;
    int ** ptr2 = &ptr;

    /*
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

    //printing address of i
    cout<<&i<<endl;
    cout<<ptr<<endl;
    cout<<*ptr2<<endl;
    */

   
   cout<<endl;
   cout<<"before "<<i<<endl;
   cout<<"before "<<ptr <<endl;
   cout<<"before "<<ptr2<<endl;
   update(ptr2);
   cout<<"after "<< i<<endl;
   cout<<"after "<<ptr <<endl;
   cout<<"after "<<ptr2<<endl;

//    cout<<endl;
//    cout<<"before "<<i<<endl;
//    cout<<"before "<<ptr <<endl;
//    cout<<"before "<<ptr2<<endl;
//    update(ptr2);
//    cout<<"after "<< i<<endl;
//    cout<<"after "<<ptr <<endl;
//    cout<<"after "<<ptr2<<endl;

//    cout<<endl;
//    cout<<"before "<<i<<endl;
//    cout<<"before "<<ptr <<endl;
//    cout<<"before "<<ptr2<<endl;
//    update(ptr2);
//    cout<<"after "<< i<<endl;
//    cout<<"after "<<ptr <<endl;
//    cout<<"after "<<ptr2<<endl;

    return 0;
}