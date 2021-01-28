#include<bits/stdc++.h>
using namespace std;

long long positiveInteger(vector<long long> array, int n){

    sort(array.begin(), array.end());
    long long int res = 1;    
    for (int i = 0; i < n && array[i] <= res; i++){
        res = res + array[i];
    }

    return res; 

}

int main(){
    int n;
    cin>>n;
    long long ip;
    vector<long long> v;
    for(int i=0;i<n;i++){
        cin>>ip;
        v.push_back(ip);
    }
    cout<<positiveInteger(v, n);
}