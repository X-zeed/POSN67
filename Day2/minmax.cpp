#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,min=10000,max=-10000,a;
    cin>>n;
    if(n<=0){
        cout<<"ERROR";
    }
    else{
    for(i=0;i<n;i++){
        cin>>a;
        if(a>1000 || a<-1000){
            cout<<"ERROR";
            return 0;
        }
        else{
            if(min>a){
                min=a;
            }
            if(max<a){
                max=a;
            }
        }
    }
    cout<<min<<endl<<max;
    }
}