#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int i,n=s.size();
    for(i=0;i<n;i++){
        if(s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122){
            cout<<s[i];
        }
    }
}