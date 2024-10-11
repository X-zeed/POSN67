#include<bits/stdc++.h>
using namespace std;
int main(){
    int hs,ms,ht,mt,h,m;
    cin>>hs>>ms>>ht>>mt;
    m=ms+mt;
    h=hs+ht;
    if(m>=60){
        m-=60;
        h+=1;
    }
    if(h>=24){
        h-=24;
    }
    cout<<h<<" "<<m;
}