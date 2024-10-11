#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string a;
    cin>>a;
    int i,n=a.size(),b;
    float c=n,count=0;
    for(i=0;i<n;i++){
        b=a.find("Au");
        if(b!=-1){
            count+=1;
            a[b]='\0';
            a[b+1]='\0';
        }
    }
    printf("%.2f",(count/(c/2))*100);
}