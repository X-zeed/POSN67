#include<bits/stdc++.h>
using namespace std;
int main(){
    struct{
        string code;
        string name;
        int a,b,c;
    }student;
    cin>>student.code>>student.name>>student.a>>student.b>>student.c;
    cout<<student.code<<" "<<student.name<<" "<<student.a+student.b+student.c;
}