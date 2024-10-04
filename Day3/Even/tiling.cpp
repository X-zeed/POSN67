#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,a,b;
    cin>>n;
    int x[n][2];
    for(i=0;i<n;i++){
        cin>>x[i][0]>>x[i][1];
    }
    for(i=0;i<n;i++){
        a=3;
        b=0;
        while((4*b)-4<=x[i][1]){
            b++;
            if(4*b-4>x[i][1]){
                b-=1;
                break;
            }
        }
        while((a-2)*(a-2)<=x[i][0]){
            a++;
        }
        a--;
        // cout<<a<<" "<<b<<endl;
        cout<<min(a,b)<<endl;
        a=0;
        b=0;
    }
}