#include <bits/stdc++.h>
using namespace std;

long long int sqrtInteger(int n){
    int start = 0, end = n - 1;
    long long int mid = start + (end - start)/2;

    long long int ans = -1;
    while(start <= end){
        long long int square = mid * mid;

        if(square == n){
            return mid;
        }
        if(square < n){
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

double morePrecision(int n, int precision, int temp_sol){
    double factor = 1;
    double ans = temp_sol;

    for(int i=0; i<precision; i++){
        factor = factor / 10;
        for(double j=ans; j*j<n; j=j+factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    int temp_sol = sqrtInteger(n);
    cout<<"Answer is "<<morePrecision(n, 3, temp_sol);

    return 0;
}