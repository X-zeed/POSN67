#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=-1;
    // priority_queue<int , vector<int>, greater<int>> pq;
    vector<int> v;
    while(x!=0){
        cin>>x;
        if(x!=0){
            v.push_back(x);
        }
    }
    sort(v.begin(),v.end());

    auto it = v.begin();
    while(it!=v.end()){
        cout<<*it<<" ";
        it++;
    }
}