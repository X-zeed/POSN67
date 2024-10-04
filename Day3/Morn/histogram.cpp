#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num[n];
    for(int i=0;i<n;i++) {
        cin>>num[i];
    }
    for(int i=0;i<n;i++) {
        cout<<num[i]<<" ";
        for(int j=0;j<num[i];j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}