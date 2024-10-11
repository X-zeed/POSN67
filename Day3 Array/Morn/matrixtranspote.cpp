#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i,j;
    cin>>n>>m;
    int x[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>x[i][j];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<x[j][i]<<" ";
        }
        cout<<endl;
    }
}