#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int big=0,small=0,i;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++){
        if(isupper(s[i])){
            big+=1;
        }
        else{
            small+=1;
        }
    }
    if(big==s.size()){
        cout<<"big";
    }
    else if(small==s.size()){
        cout<<"small";
    }
    else{
        cout<<"mix";
    }
    
}