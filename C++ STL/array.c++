#include <iostream>
#include<array>
using namespace std;

int main(){
    int basic[3] = {1, 2, 3};

    array<int, 4> arr = {1, 2, 3, 4};

    int size = arr.size();

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }

    cout<<"Element at 2nd Index -> "<<arr.at(2)<<endl;

    cout<<"Empty or not -> "<<arr.empty()<<endl;
    // 0 for false and 1 for true

    cout<<"First Element -> "<<arr.front()<<endl;

    cout<<"last Element -> "<<arr.back()<<endl;
}