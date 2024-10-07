#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    long int i,j,n;
    cin>>n;
    n%=s.size();
    for(i=n;i<s.size();i++){
        cout<<s[i];
    }
    for(i=0;i<n;i++){
        cout<<s[i];
    }
}