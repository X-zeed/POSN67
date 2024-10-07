#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,m,n,a=0,b=0,c=0,d=0,max=-100000;
    cin>>m>>n;
    if(m*n==0){return 0;}
    int x[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>x[i][j];
        }
    }
    // หาแนวนอน
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(j+1<n){
                if(x[i][j]+x[i][j+1]>max){
                    max=x[i][j]+x[i][j+1];
                    a=i;
                    b=j;
                    
                }
            }
        }
    }
    // หาแนวตั้ง
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(j+1<m){
                if(x[j][i]+x[j+1][i]>max){
                   max=x[j][i]+x[j+1][i];
                    c=j;
                    d=i;
                }
            }
        }
    }
    if(max==x[a][b]+x[a][b+1]){
        cout<<a<<","<<b<<" "<<a<<","<<b+1;
    }
    else if(max==x[c][d]+x[c+1][d]){
        cout<<c<<","<<d<<" "<<c+1<<","<<d;
    }
}