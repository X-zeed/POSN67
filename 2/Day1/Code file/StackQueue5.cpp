#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char> st;
    for(auto x : s){
        if(x=='('){
            st.push('(');
        }
        else if(x==')'){
            if(!st.empty()){
                st.pop();
            }
        }
    }
}