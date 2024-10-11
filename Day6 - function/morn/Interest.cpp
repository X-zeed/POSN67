#include<bits/stdc++.h>
using namespace std;
int main(){
    float start,add;
    int year,i;
    cin>>start>>year>>add;
    for(i=2;i<=year;i++){
        start+=add;
        if(i>=3&&i<=4){
            start+=start*0.02;
        }
        else if(i>=5&&i<=8){
            start+=start*0.05;
        }
        else if(i>=9){
            start+=start*0.1;
        }
        // cout<<i<<" "<<start<<endl;
    }
    printf("%.2f",start);
}