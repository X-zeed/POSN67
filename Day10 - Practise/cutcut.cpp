#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    char a[100];
    getline(cin,s);
    int i,j,len=s.size(),c=0;
    for(i=0;i<len;i++){
        for(j=i+1;j<len;j++){
            if((s[i]==s[j]||int(s[i])-32==int(s[j])||int(s[i])+32==s[j])&&s[j]!=' '){
                s[j]=' ';
            }
        }
    }
    for(i=0;i<len;i++){
        if(int(s[i])>=int('A')&&int(s[i])<=int('Z')||int(s[i])>=int('a')&&int(s[i])<=int('z'))
        cout<<s[i];
    }
}