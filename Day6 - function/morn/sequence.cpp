#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,i,j,f0,f1,n,s;
    cin>>x;
    for(i=0;i<x;i++){
        cin>>f0>>f1>>n;
        n-=2;
        for(j=0;j<n;j++){
            s=f0+f1;
            f0=f1;
            f1=s;
        }
        cout<<s<<endl;
    }
}