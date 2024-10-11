#include<bits/stdc++.h>
using namespace std;

void rectAngle(int n,int w ,int h){
    int i,j,k;
    for(i=0;i<n;i++){
        if(i!=0){
            cout<<endl;
        }
        for(j=0;j<h;j++){
            for(k=0;k<w;k++){
                cout<<"*";
            }
            cout<<endl;
        }

    }
}

void triAngle(int n,int h){
    int i,j,k;
    for(k=0;k<n;k++){
        if(k!=0){
            cout<<endl;
        }
    for(i=0;i<h;i++){
        for(j=h-1;j>i;j--){
            cout<<" ";
        }
        for(j=0;j<i+1;j++){
            cout<<"*";
        }
        for(j=i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
}

int main(){
    string c;
    int n,w,h;
    cin>>c;
    if(c[0]=='r'){
        cin>>n>>w>>h;
        rectAngle(n,w,h);
    }
    if(c[0]=='t'){
        cin>>n>>w;
        triAngle(n,w);
    }
}

