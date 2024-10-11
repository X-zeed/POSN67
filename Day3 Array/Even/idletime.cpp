#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,x[481],a,b,c=0;
    for(i=0;i<480;i++){
        x[i]=0;
    }
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b;
        for(j=a;j<b+1;j++){
            x[j]=1;
        }
    }
    for(i=0;i<480;i++){
        if(x[i]==0){
            c+=1;
        }
    }
    cout<<c;
}