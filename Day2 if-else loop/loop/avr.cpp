#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,c=1;
    cin>>n;
    sum+=n;
    while(n!=0){
        cin>>n;
        sum+=n;
        c++;
    }
    c--;
    cout<<sum/c;
}