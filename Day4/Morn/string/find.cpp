#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string a="Monkey D Luffy";
    int b = a.find("luffy");
    if(b==-1) {
        cout<<"not found";
    }
    else {
        cout<<b;
    }
}