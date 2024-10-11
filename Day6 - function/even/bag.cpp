#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,i,c=1,a,sum=0;
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>a;
        if(sum+a<=k){
            sum+=a;
        }
        else{
            c++;
            sum=a;
        }
    }
    cout<<c;
}