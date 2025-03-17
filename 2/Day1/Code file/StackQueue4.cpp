#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int a,b;
    stack<char> st;
    cin>>s;
    for(char x : s){

        if((int(x)-48)>=0 && (int(x)-48)<=9){
            st.push(x);
        }
        else{
             a = int(st.top())-48;
            st.pop();
            b= int(st.top())-48;
            st.pop();
        }
        if(x=='+'){
            st.push(char(a+b) + 48);
        }
        if(x=='-'){
            st.push(char(a-b) + 48);
        }
        if(x=='*'){
            st.push(char(a*b) + 48);
        }
        if(x=='/'){
            st.push(char(a/b) + 48);
        }
        if(x=='^'){
            st.push(char(pow(a,b)) + 48);
        }
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}