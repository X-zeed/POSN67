#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    struct{
        string code;
        string name;
        int a,b,c;
    }student[n];
    for(i=0;i<n;i++){
        cin>>student[i].code>>student[i].name>>student[i].a>>student[i].b>>student[i].c;
    }
    for(i=0;i<n;i++){
    cout<<student[i].code<<" "<<student[i].name<<" "<<student[i].a+student[i].b+student[i].c;
    cout<<endl;
    }
}