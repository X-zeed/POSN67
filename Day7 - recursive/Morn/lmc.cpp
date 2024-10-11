#include<bits/stdc++.h>
using namespace std;
int lmc(int,int);
int main(){
    int n1,n2;
    cin>>n1>>n2;
    cout<<n1*n2/lmc(n1,n2);
}

int lmc(int n1,int n2){
    if(n1==0){return n2;}
    if(n2==0){return n1;}
    if(n1==n2){return n1;}
    if(n1>n2){return lmc(n1-n2,n2);}
    return lmc(n1,n2-n1);
}