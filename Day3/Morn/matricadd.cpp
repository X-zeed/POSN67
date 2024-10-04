#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,m;
    cin>>n>>m;
    int x[n][m],y[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>x[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>y[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<y[i][j]+x[i][j]<<" ";
        }
        cout<<endl;
    }
}