#include<bits/stdc++.h>
#include <string.h>
using namespace std;

int main(){
    priority_queue<pair<int,string> , vector<pair<int,string>>, greater<pair<int,string>>> ms;
    string s = "0";
    int a,b,c;
    while(s!="-"){
        cin>>s;
        if(s!="-"){
            cin>>a>>b>>c;
            ms.push(make_pair(((a*3600)+(b*60)+c),s));
        }
       else{
        break;
       }
    }

    while(!ms.empty()){
        cout<<ms.top().second<<" ";
        ms.pop();
    }
}