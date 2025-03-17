#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char> st;
    for(char x : s){
        if(x=='n'){
            st.push(x);
        }
        if(x=='s'){
            if(!st.empty()){
                st.pop();
            }
            else{
                cout<<"ERR";
                return 0;

            }
        }
    }
    if(st.empty()){
        cout<<"OK";
        return 0;
    }
    cout<<"ERR";
}