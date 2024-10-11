#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int n,i,j,max=0,c=0;
    cin>>n;
    string S[n];
    for(i=0;i<n;i++){
        cin>>S[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i!=j){
                if(S[i]==S[j]&&S[j]!="0"&&S[i]!="0"){
                    c++;
                    S[j]="0";
                }
            }
        }
        if(max<c){
            max=c;
        }
        c=0;
    }
    c=0;
    for(i=0;i<n;i++){
        if(S[i]!=""){0
            c+=1;
        }
    }
    cout<<n-c;
}