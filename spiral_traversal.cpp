#include<bits/stdc++.h>
using namespace std;

int findK(vector<vector<int>> &arr, int n, int m, int k){
    int TopRow=0,LeftCol=0;
    int BotRow=m-1, RightCol=n-1;
    int dir=0, ip;
    vector<int> spiral;
    spiral.push_back(0);
    while(TopRow<=BotRow && LeftCol<=RightCol){
        
        // Row traverse Left -> Right
        if(dir==0){
            for(int i=LeftCol; i<=RightCol; i++){
                // cout<<arr[TopRow][i]<<",";
                ip = arr[TopRow][i];
                spiral.push_back(ip);
            }
            TopRow++;
            dir=1;
        }
        // Col traverse Top -> Bottom
        else if(dir==1){
            
            for(int j=TopRow; j<=BotRow; j++){
                //cout<<arr[j][RightCol]<<",";
                ip = arr[j][RightCol];
                spiral.push_back(ip);
            }
            RightCol--;
            dir = 2;
        }
        // Row traverse Right -> Left
        else if(dir==2){
            
            for(int k=RightCol; k>=LeftCol; k--){
                // cout<<arr[BotRow][k]<<",";
                ip = arr[BotRow][k];
                spiral.push_back(ip);
            }
            BotRow--;
            dir=3;
        }
        // Col traverse Bottom -> Top
        else if(dir==3){
            for(int l=BotRow;l>=TopRow;l--){
                // cout<<arr[l][LeftCol]<<",";
                ip = arr[l][LeftCol];
                spiral.push_back(ip);
            }
            LeftCol++;
            dir=0;
        }
    }
    
    return spiral[k];
}

int main(){
    int n, m, k;
    cin>>n>>m>>k;
    vector<vector<int>> v(n, vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    cout<<findK(v, n, m, k);

}