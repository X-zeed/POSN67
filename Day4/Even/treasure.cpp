#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int i,j,c=0;
    for(i=0;i<s1.size();i++){
        for(j=0;j<s2.size();j++){
            if(s1[i]==s2[j]&&s1[i]!='\0'){
                c++;
                s1[i]='\0';
                s2[j]='\0';
                break;
            }
        }
    }
    if(c>=s2.size()){
        cout<<"FOUND :)";
    }
    else if(c<s2.size()){
        cout<<"NOT FOUND :(";
    }
}