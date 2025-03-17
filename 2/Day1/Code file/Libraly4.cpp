#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<pair<int,pair<string,char>>> v;
    int x;
    char g;
    string s="0";
    while(s!="-"){
        cin>>s;
        if(s!="-"){
            cin>>g>>x;
            v.push(make_pair(x,make_pair(s,g)));
        }
        
    }
    while(!v.empty()){
        cout<<v.top().second.first<<" ";
        cout<<v.top().second.second<<" ";
        cout<<v.top().first<<endl;
        v.pop();
    }
}