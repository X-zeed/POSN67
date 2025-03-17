#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    string user,pass;
    int money;
    cin>>n;
    tuple<string , int , string> tp[n];
    for(i=0;i<n;i++){
        cin>>user>>money>>pass;
        tp[i] = make_tuple(user,money,pass);
    }
    cin>>pass;
    for(i=0;i<n;i++){
        if(get<2>(tp[i]) == pass){
            cout<<get<0>(tp[i])<<endl<<get<1>(tp[i]);
        }
    }
}