#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int input,space,i,j,k=2,c=65,a=0,b=0,x=3,l; // k = delete space
    cin>>input;
    //define space
    if(input%2==0){space=input-2;}else{space=input-1;}
    for(i=0;i<input;i++){
        if(i%2!=0||i==0){
            for(j=0;j<space;j++){
                cout<<" ";
            }
            if(i>=2){
                b=x-2;
            }
            for(j=0;j<i+1;j++){
                l=(a+b)%26;
                if(c+l>=65&&c+l<=97){
                    cout<<char(c+l);
                }
                a++;
            }
            a+=b;
        }
        else{
            for(j=0;j<space-k;j++){
                cout<<" ";
            }
            k+=2;
            for(j=0;j<x;j++){
                l=(a+x)%26;
                if(c+l-j-1>=65&&c+l-j-1<=97){
                    cout<<char(c+l-j-1);
                }
                else if(c+l-j-1<65){
                    cout<<char((c+l-j-1)+26);
                }
            }
            x+=2;
        }
        cout<<endl;
    }
}