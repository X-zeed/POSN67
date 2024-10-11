#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    struct{
        string name;
        int time=1;
    }mystruct[n];
    for(i=0;i<n;i++){
        cin>>mystruct[i].name;
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(mystruct[i].name==mystruct[j].name&&(mystruct[j].name!="-")){
                mystruct[j].name="-";
                mystruct[i].time+=1;
            }
        }
    }
    int max=-1000;
    string max_name;
    for(i=0;i<n;i++){
        if(mystruct[i].time>max){
            max=mystruct[i].time;
            max_name=mystruct[i].name;
        }
    }
    cout<<max_name;
}