#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s,s2;
    priority_queue<pair<int,string>> pq;
    cin>>n;
    float len=n,sum=0,p;
    while(n--){
        cin>>s>>p;
        sum+=p;
        pq.push(make_pair(p,s));
    }
    cout<<pq.top().second<<endl;
    while(!pq.empty()){
        s2 = pq.top().second;
        pq.pop();
    }
    cout<<s2<<endl;
    cout<<fixed<<setprecision(4)<<sum/len;
}