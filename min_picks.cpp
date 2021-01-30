#include<iostream>
using namespace std;

int find_min(int a[], int n, int k){
    int sum = 0, completePairs = 0;
    for(int i=0;i<n;i++){
        completePairs += a[i]/2;
        if(a[i]%2==0){
            sum += (a[i]-2)/2;
        }else{
            sum += (a[i]-1)/2;
        }
    }
    if(k > completePairs){
        return -1;
    } 
    if(k<=sum){
        return 2*(k-1)+n+1;
    } 
    return 2*sum+n+(k-sum);
}

int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<find_min(arr,n,k);
}