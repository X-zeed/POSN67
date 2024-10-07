#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,c=0,a=0;
    string s,s1;
    getline(cin,s);
    cin>>s1;
    char s2[s.size()];
    for(i=0;i<s.size();i++){s[i]=char(toupper(int(s[i])));}
    for(i=0;i<s.size();i++){
        if(int(s[i])>=65&&int(s[i])<=97){
            s2[a]=s[i];
            a++;
        }
    }
    for(i=0;i<s1.size();i++){s1[i]=char(toupper(int(s1[i])));}
    a=0;
    string s3=s2;
    for(i=0;i<s.size();i++){
        n=s3.find(s1);
        if(n!=-1){
            c++;
            a=0;
            for(j=n;a<s1.size();j++){
                s3[j]='\0';
                a++;
            }
        }
    }
    cout<<c;
}