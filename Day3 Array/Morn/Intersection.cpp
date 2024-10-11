#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,m,n,c=0;
    cin>>n>>m;
    int x[n],y[m];
    for(i=0;i<n;i++){
        cin>>x[i];
    }
    for(i=0;i<m;i++){
        cin>>y[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(x[i]==y[j]){
                c+=1;
                x[i]='\n';
                y[j]='\n';
                break;
            }
        }
    }
    cout<<c;
}