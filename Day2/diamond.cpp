#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=n;j>i+1;j--){
                cout<<" ";
        }
        for(j=0;j<=i;j++){
            cout<<"* ";
        }
           
        cout<<endl;
    } 
    for(i=0;i<n-1;i++){
        for(j=1;j<=i+1;j++){
            cout<<" ";
        }
        for(j=n;j>i+1;j--){
            cout<<"* ";
        }
        // if(j!=i){
            cout<<endl;
        // }
        
    }
}