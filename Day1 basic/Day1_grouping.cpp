#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,i=0;
    cin>>a>>b;
    while(b*i<=a){
        i++;
    }
    i-=1;
    cout<<i<<endl<<a-(b*i);
}