#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    //Creating a 2D array
    int** arr = new int*[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    //taking input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    //taking output
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < n; j++)
        {
            cout<<arr[i][j]<<' ';
        }cout<<endl;  
    }

    //releasing memory
    for (int i = 0; i < n; i++)
    {
        delete []arr;
    }

    delete []arr;

    //how to create a 2D array dynamically
    //input/Output
    //memory free kaise karani hai

    return 0;
}