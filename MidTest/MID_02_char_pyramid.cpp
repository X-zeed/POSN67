#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,c=0;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
            cout<<" ";
        }
        for(j=1;j<=i+1;j++){
            j%=26;
            if(j==0){
                j=26;
            }
            cout<<char(64+j);
        }
        for(j=i;j>0;j--){
            j%=26;
            if(j==0){
                j=26;
            }
            cout<<char(64+j);
        }
        cout<<endl;
    }
}