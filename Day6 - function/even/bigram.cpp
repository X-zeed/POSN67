#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0,i=0,j,x[100000],a=0,b=0,c=0,d=0;
    for(i=0;i<100000;i++){
        x[i]='\0';
    }
    i=0;
    while(n==0||n==1){
        cin>>n;
        x[i]=n;
        i++;
    }
    int len=i-1;
    for(i=0;i<len;i++){
        if(i+1<len){
            if(x[i]==0&&x[i+1]==0){
                a++;
            }
            else if(x[i]==0&&x[i+1]==1){
                b++;
            }
            else if(x[i]==1&&x[i+1]==0){
                c++;
            }
            else if(x[i]==1&&x[i+1]==1){
                d++;
            }
        }
        
    }
    // cout<<a;
    cout<<a<<endl<<b<<endl<<c<<endl<<d;
}