#include<bits/stdc++.h>
using namespace std;

void prank(long long a[], long long n){
    long long copy[n];
        // copy of original array
    for(int i=0;i<n;i++){
        int temp = a[i];
        copy[i] = a[temp];
    }
    for(long long i=0;i<n;i++){
        a[i] = copy[i];
    }
}

int main(){
    long long n;
    cin>>n;
    long long arr[n];
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    prank(arr,n);
    for(long long x: arr){
        cout<<x<<" ";
    }
}