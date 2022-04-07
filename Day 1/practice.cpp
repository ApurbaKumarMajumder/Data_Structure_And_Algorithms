#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[5] = {1, 2, 3, 4, 5};
    int s = 5;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        ans = ans^arr[i];   
    }

    for (int i = 1; i < n; i++)
    {
        ans ^= i;
    }

    return ans;
    

}
