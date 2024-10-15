#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n,a=0;
    cin>>n;
    cin.ignore();
    getline(cin,s);
    int i,len=s.size();
    char c[len];
    for(i=0;i<len;i++){c[i]='\0';}
    if(n==1){
        for(i=0;i<len;i++){
            if((int(s[i])>=int('A')&&int(s[i])<=int('Z'))||(int(s[i])>=int('a')&&int(s[i])<=int('z'))){
                c[a]=toupper(s[i]);
                a++;
            }
        }
        len=a;
        char c2[len+1];
        for(i=0;i<len;i++){c2[i]='\0';}
        a=0;
        for(i=(len/2)-1;i>=0;i--){
            c2[a]=c[i];
            a+=2;
        }
        a=1;
        for(i=(len/2);i<len;i++){
            c2[a]=c[i];
            a+=2;
        }
        for(i=0;i<len;i++){
            cout<<c2[i];
        }
    }
    if(n==2){
        
    }
}