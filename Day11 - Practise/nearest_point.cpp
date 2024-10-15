#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int n,i,j,a,b;
    cin>>n;
    float x[n][2],min=10000000,d;
    for(i=0;i<n;i++){cin>>x[i][0]>>x[i][1];}
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            d=sqrt(((x[i][0]-x[j][0])*(x[i][0]-x[j][0]))+((x[i][1]-x[j][1])*(x[i][1]-x[j][1])));
            if(min>d){
                a=i;
                b=j;
                min=d; 
            }
        }
    }
    cout<<a+1<<" "<<b+1<<" ";
    cout<<fixed<<setprecision(2)<<min;
}