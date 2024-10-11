#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    float min=100000;
    string Mname;
    cin>>n;
    struct{
        string name;
        float price;
        float sale;
        float dif;
    }shop[n];
    for(i=0;i<n;i++){
        cin>>shop[i].name>>shop[i].price>>shop[i].sale;
        shop[i].dif=shop[i].price-((shop[i].sale/100)*shop[i].price);
    }
    for(i=0;i<n;i++){
        if(min>shop[i].dif){
            min=shop[i].dif;
            Mname=shop[i].name;
        }
    }
    for(i=0;i<n;i++){
        if(shop[i].dif==min){
            cout<<shop[i].name<<endl;
        }
    }
}