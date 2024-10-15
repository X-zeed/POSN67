#include<bits/stdc++.h>
using namespace std;
int main(){
    int I=1,V=5,X=10,L=50,C=100,D=500,M=1000,i,j,sum=0,dif=0;
    bool minus=false;
    string s;
    cin>>s;
    int len=s.size();
    int x[len];
    for(i=0;i<len;i++){
        if(s[i]=='I'){x[i]=I;}
        else if(s[i]=='V'){x[i]=V;}
        else if(s[i]=='X'){x[i]=X;}
        else if(s[i]=='L'){x[i]=L;}
        else if(s[i]=='C'){x[i]=C;}
        else if(s[i]=='D'){x[i]=D;}
        else if(s[i]=='M'){x[i]=M;}
    }
    sum+=x[len-1];
    for(i=0;i<len;i++){
        if(i+1<len){
            if(x[i]<x[i+1]){
                dif+=x[i];
                minus=true;
                // cout<<"dif="<<dif<<endl;
            }
            if(x[i]>=x[i+1]){
                sum+=x[i];
                // cout<<"sum="<<sum<<endl;
            }
        }
    }
    if(minus){
        sum-=dif;
    }
    if(!minus) {
        sum+=dif;
    }
    cout<<sum;
}