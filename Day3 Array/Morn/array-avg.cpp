#include<bits/stdc++.h>
using namespace std;
int main(){
    float max=-1000,min=1000,maxp,minp,sum=0;
    int i,n;
    cin>>n;
    int x[n];
    for(i=0;i<n;i++){
        cin>>x[i];
        sum+=x[i];
        if(min>x[i]){
            min=x[i];
            minp=i+1;
        }
        if(max<x[i]){
            max=x[i];
            maxp=i+1;
        }
    }
    printf("%.2f\n",sum/n);
    cout<<max<<" "<<maxp<<endl<<min<<" "<<minp;
    // printf("%.2f\n%.0f %d\n%.0f %d",sum/n,max,maxp,min,minp);
}