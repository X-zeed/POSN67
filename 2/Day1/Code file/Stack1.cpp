#include<bits/stdc++.h>
using namespace std;

int main(){
    int s,n,a,b,c;
    cin>>s>>n;
    vector<stack<int>> st(s);
    while(n--){
        cin>>a>>b;
        if(a==0){
            cin>>c;
            st[b].push(c);
        }
        else if(a==1){
            if(!st[b].empty()){
                cout<<st[b].top()<<endl;
            }
        }
        else if(a==2){
            if(!st[b].empty()){
                st[b].pop();
            }
        }
    }
}