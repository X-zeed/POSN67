#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int i,j,a,b,x=0,y=0;
    string s1,s2;
    cin>>s1>>s2;
    int n1=s1.size(),n2=s2.size();
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(s1[i]==s2[j]){
                a=i;
                b=j;
                // cout<<a<<b;
            }
        }
    }
    for(i=0;i<n2;i++){
        for(j=0;j<n1;j++){
            if(i==b&&x==0){
                cout<<s1;
                x++;
                break;
            }
            else{
                if(j!=a){
                    cout<<" ";
                }  
                else {
                    cout<<s2[i];
                }
            }
            
        }
        cout<<endl;
    }
}