#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int a,b,c,d,e,i,j,count=0;
    cin>>a>>b>>c>>d;
    cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<d<<endl;
    do {
        e=abs(a-b);
        cout<<e<<"\t";
        b=abs(b-c);
        cout<<b<<"\t";
        c=abs(c-d);
        cout<<c<<"\t";
        d=abs(a-d);
        a=e;
        cout<<d<<endl;
        count++;
    }while(a!=0||b!=0||c!=0||d!=0);
    cout<<count;
}