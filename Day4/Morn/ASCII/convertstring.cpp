#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string a;
    cin>>a;
    int i;
    for(i=0;i<a.length();i++){
        cout<<char(toupper(a[i]));
    }
}