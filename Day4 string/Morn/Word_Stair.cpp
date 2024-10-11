#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int n,i,j,z=0;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=0;j<i;j++){
            cout<<char(65+z);
            z+=1;
            z%=26;
        }
        cout<<endl;
    }
}