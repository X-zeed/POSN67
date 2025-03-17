#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n,x;
    cin>>n;
    while(n--){
        cin>>x;
        v.push_back(x);
    }
    cin>>x;
    sort(v.begin(),v.end());
    if(x==1){
        auto it = v.begin();
        while(it!=v.end()){
            cout<<*it<<endl;
            it++;
        }
    }
    if(x==2){
        cout<<*(v.end()-1);
    }
    if(x==3){
        cout<<*v.begin();
    }
}