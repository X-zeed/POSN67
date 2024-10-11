#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n=4;
    for(i=0;i<n;i++){
        for(j=i;j<n-1;j++){
            cout<<" ";
        }
        for(j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}