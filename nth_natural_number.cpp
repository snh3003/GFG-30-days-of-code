#include<bits/stdc++.h>
using namespace std;

long long isPresent(long long i){
    while(i){
        if(i%10==9){
            return 1;
        }
        i = i/10;
    }
    return 0;
}

long long findnth(long long n){
    int count = 0;
    for(long long i=1; i<=n; i++){
        if(isPresent(i)){
            //cout<<i<<endl;
            count++;
            //cout<<"Count: "<<count;
        }
    }
    long long cnt = 0;
    if(cnt){
        count = findnth(n+count);
    }
    return n+count;
}

int main(){
    long long n;
    cin>>n;
    cout<<findnth(n);  
    // cout<<len(n);
}