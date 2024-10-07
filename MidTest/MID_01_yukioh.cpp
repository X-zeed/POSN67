#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,c,a=0;
    cin>>n>>c;
    if(n%c==0){
        a=-1;
    }
    cout<<n/c+a;
}