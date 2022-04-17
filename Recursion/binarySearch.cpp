#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int *arr, int s, int e, int key){

//base case
    //element not found
    if(s>e){
        return false;
    }

    int mid = s + (e - s)/2;

    //element found
    if (arr[mid] == key){
        return true;
    }

    if(arr[mid] < key){
        return binarySearch(arr, mid + 1, e, key);
    }
    else{
        return binarySearch(arr, s, mid - 1, key);
    }
}

int main(){

    int arr[11] = {2, 4, 6, 10, 14, 18, 22, 38, 49, 55, 222};
    int size = 11;
    int key = 7;

    cout<<"Present or not "<< binarySearch(arr, 0, size - 1, key)<<endl;

    return 0;
}