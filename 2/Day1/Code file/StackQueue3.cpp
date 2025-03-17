#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char> st;
    for(char x : s){
        if(x>='A'&&x<='Z'){
            cout<<x;
        }else{
            if(st.empty()){
                st.push(x);
            }
            else{
                cout<<st.top();
                st.pop();
                st.push(x);
            }
            
        }
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}