#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int check[]={0,1,2,3,4,5,6,7,8,9};
    int j,i,n=s.size(),c=0;
    for(i=0;i<n;i++){
        for(j=0;j<9;j++){
            if(int(s[i]-48)==check[j]){
                c++;
                check[j]=-1;
            }
        }
        
        // cout<<int(s[i])-48<<endl;
    }
    if(c==9){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}