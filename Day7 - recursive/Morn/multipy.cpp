#include<bits/stdc++.h>
using namespace std;
    
int multiply(int,int);

int main(){
    int m,n;
    cin>>m>>n;
    cout<<multiply(m,n);
}

int multiply(int m,int n){
    int ans;
    if(n==1){
        return m;
    }
    else{
        ans = m + multiply(m,n-1);
        return ans;
    }
}