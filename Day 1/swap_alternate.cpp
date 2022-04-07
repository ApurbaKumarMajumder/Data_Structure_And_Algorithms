#include<bits/stdc++.h>
using namespace std;

void arrayPrint(int arr[], int n){
    // int m = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    } 
    cout<<endl;
}

void swapAlternate(int arr[], int n){
    for (int i = 0; i < n; i+=2)
    {
        if ((i+1) < n)
        {
            swap(arr[i], arr[i+1]);
        }
        
    }
    
}

int main() {
    
    int even[8] = {5, 2, 9, 4, 7, 6, 1, 0};
    int odd[5] = {11, 33, 9, 76, 43};

    // array input
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }

    swapAlternate(even, 8);
    arrayPrint(even, 8);

    cout<<endl;

    swapAlternate(odd, 5);
    arrayPrint(odd, 5);
}
for (int i = 0; i < n; i++)
{
    for (int j = i+1; j < n; j++)
    {
        if(arr[i] + arr[j] == s){
            System.out.print(arr[i] + ' ');
            System.out.print(arr[j] + ' ');
        }
        System.out.println();
    }
    
}
