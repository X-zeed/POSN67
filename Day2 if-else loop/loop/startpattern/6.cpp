#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n=4;
    for(i=0;i<n;i++){
        
        for(j=i+1;j>0;j--){
            cout<<" ";
        }
        for(j=1;j<=n-i-1;j++){
            cout<<j;
        }
        for(j=n-i-2;j>0;j--){
            cout<<j;
        }
        // for(j=i;j>0;j--){
        //     cout<<j;
        // }

        cout<<endl;
    } 
}