#include<bits/stdc++.h>
using namespace std;
int main(){
    double x,sum=0;
    int i;
    for(i=0;i<4;i++){
        cin>>x;
        sum+=x;
    }
    printf("%.1f",sum/4);
}