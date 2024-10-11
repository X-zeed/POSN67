#include<bits/stdc++.h>
using namespace std;
int main(){
    float start,end;
    cin>>start>>end;
    if(end<start){end+=24;}
    float dif = end-start;
    if(dif<0.15){cout<<"FREE";}
    else{
        if(dif>(int)dif){dif=(int)dif + 1;}
        if(dif==1){cout<<25;}
        else if(dif==2){cout<<50;}
        else if(dif==3){cout<<80;}
        else if(dif==4){cout<<110;}
        else if(dif==5){cout<<145;}
        else if(dif==6){cout<<180;}
        else if(dif>=7&&dif<=24){cout<<250;}
    }
}