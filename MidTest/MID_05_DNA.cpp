#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    char s3[s2.size()];
    int i,j,b,a=0;
    float c = 0, n = s1.size();
    for(i=0;i<s1.size();i++){
        if(s2[i]==s1[0]){
            b=i;
            break;
        }
    }
    for(i=b;i<s2.size();i++){
        s3[a]=s2[i];
        a++;
    }
    for(i=0;i<b;i++){
        s3[a]=s2[i];
        a++;
    }
    for(i=0;i<s1.size();i++){
        if(s1[i]==s3[i]){
            c++;
        }
    }
    if(c/n*100>=80.00){
        cout<<"Match! ";
        printf("%.2f",c/n*100);
    }
    else{
        cout << "Not match :(";
    }
}