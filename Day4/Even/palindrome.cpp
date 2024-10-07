#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string s,a,b;
    cin>>s;
    int n=s.size(),i,j,k,l,c,max=0,index_max=0;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(s[i]==s[j]){
                for(k=i;k>j-1;k--){
                    a+=s[k];
                }
                for(k=j;k<i+1;k++){
                    b+=s[k];
                }
                if(a==b){
                    c=i-j+1;
                    if(max<c){
                        index_max=(i+j+1)/2;
                        max=c;
                    }
                }
            }
        }
    }
    if(max==0){cout<<"0 1";}
    else{cout<<index_max<<" "<<max;}
}