#include<bits/stdc++.h>
using namespace std;

void L(){
    cout<<"#\n#\n###";
}

void O(){
    cout<<"###\n# #\n###";
}

void V(){
    cout<<"# #\n# #\n # ";
}

void E(){
    cout<<"###\n##\n###";
}

int main(){
    string s;
    cin>>s;
    int i,len=s.size();
    for(i=0;i<len;i++){
        if(i!=0){
            cout<<endl;
        }
        if(s[i]=='L'){
            L();
        }
        else if(s[i]=='O'){
            O();
        }
        else if(s[i]=='V'){
            V();
        }
        else if(s[i]=='E'){
            E();
        }
       cout<<endl;
    }
}