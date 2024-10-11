#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i,j,a=0,b=0,c=0;
    cin>>n>>m;
    struct{
        string name;
        char level;
    }problem[n];
    string arr[n];
    for(i=0;i<n;i++){
        cin>>problem[i].name>>problem[i].level;
    }
    for(j=0;j<m;j++){cin>>arr[j];}
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(arr[j]==problem[i].name){
                if(problem[i].level=='a'){a++;}
                else if(problem[i].level=='b'){b++;}
                else if(problem[i].level=='c'){c++;}
            }
        }
    }
    if(a<4){cout<<0;}
    else if(a==4){cout<<1;}
    else if(a>4){cout<<2;}
    cout<<endl;
    if(b<4){cout<<0;}
    else if(b==4){cout<<1;}
    else if(b>4){cout<<2;}
    cout<<endl;
    if(c<4){cout<<0;}
    else if(c==4){cout<<1;}
    else if(c>4){cout<<2;}
    cout<<endl;
}