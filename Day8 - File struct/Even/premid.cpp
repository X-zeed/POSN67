#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,c=0,sum=6;
    cin>>n;
    int x[n];
    for(i=0;i<n;i++){cin>>x[i];}
    struct{
        string name;
        int time;
    }ts[7];
    ts[0].name="Sunday";ts[0].time=6;
    ts[1].name="Monday";ts[1].time=2;
    ts[2].name="Tuesday";ts[2].time=6;
    ts[3].name="Wednesday";ts[3].time=6;
    ts[4].name="Thursday";ts[4].time=4;
    ts[5].name="Friday";ts[5].time=5;
    ts[6].name="Saturday";ts[6].time=10;
    for(i=0;i<n;i++){
        while(x[i]>sum){
            c++;
            c%=7;
            sum+=ts[c].time;
            
        }
        sum-=x[i];
        cout<<ts[c].name<<endl;
    }
}