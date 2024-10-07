#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size(),i,j,count=0,b;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            // cout<<i<<j;
            if(s[i]==s[j]&&s[i]!='-'){
                count++;
                // cout<<"\nloop"<<count<<s[i];
                s[i]='-';
            }
        }
        // cout<<endl;
    }
    cout<<n-count;
}