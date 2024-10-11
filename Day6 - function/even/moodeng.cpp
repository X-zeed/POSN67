#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,max=-100000;
    char c;
    cin>>n>>c;
    int x[n];
    for(i=0;i<n;i++){
        cin>>x[i];
        if(max<x[i]){
            max=x[i];
        }
    }
    int m=max;
    for(i=m;i>0;i--){
        for(j=0;j<n;j++){
            if(x[j]>=i){
                cout<<c;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}