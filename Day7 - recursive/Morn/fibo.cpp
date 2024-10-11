#include<bits/stdc++.h>
using namespace std;
long fib(long);
int main(){
    int n;
    cin>>n;
    cout<<fib(n);
}
long fib(long n){
    if(n==1||n==2){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}