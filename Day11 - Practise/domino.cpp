#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,count=0,sum=0;
    char c;
    cin>>n>>c;
    int x[n][2];
    for(i=0;i<n;i++){
        cin>>x[i][0]>>x[i][1];
    }
    if(c=='L'){
        sum=x[0][1]+1;
        for(i=0;i<x[n-1][0];i++){
            if(sum>x[i+1][0]){
                sum-=(x[i+1][0]-x[i][0]);
                count++;
                if(sum<x[i+1][1]){
                    sum=x[i+1][1]+1;
                }
            }
        }
    }
    // else if(c=='R')
    cout<<count;
}