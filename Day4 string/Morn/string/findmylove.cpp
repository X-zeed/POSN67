#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    int i,n=a.size();
    for(i=0;i<n;i++){
        a[i]=toupper(a[i]);
    }
    int b = a.find("LOVE");
    if(b==-1) {
        cout<<"SINGLE";
    }
    else {
        cout<<b;
    }
}