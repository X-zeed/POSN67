#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n=4;
    for(i=0;i<n;i++){
        for(j=i;j<n-1;j++){
            cout<<" ";
        }
        for(j=i+1;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
}