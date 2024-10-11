#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,z,c=0;
    cin>>n;
    int x[n];
    for(i=0;i<n;i++){
        cin>>x[i];
    }
    cin>>z;
    for(i=0;i<n;i++){
        if(x[i]==z){
            c+=1;
        }
    }
    cout<<c;
}