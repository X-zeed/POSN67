#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0) , cin.tie(0);
    int n,i,j;
    string c="X";
    vector<string> v1;
    stack<string> s;
    while(c!="S"){
        cin>>c;
        v1.push_back(c);
        n++;
    }
    auto it=v1.begin();
    while(it!=v1.end()){
        if(*it == "E"){
            it--;
            s.push(*it);
            v1.erase(it);
            it++;
        }
        it++;
    }

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    it=v1.begin();
    while(it!=v1.end()){
        if(*it!="E"&&*it!="S"){
            cout<<*it;
            if((it!=v1.end())){
                cout<<" ";
            }
        }
        it++;
    }
}