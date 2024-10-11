#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    float sum=0,x=0;
    cin>>n;
    struct{
        string code;
        string name;
        float grade;
        float result;
    }stu[n];
    for(i=0;i<n;i++){
        cin>>stu[i].code>>stu[i].name>>stu[i].grade>>stu[i].result;
        sum+=stu[i].grade*stu[i].result;
        x+=stu[i].grade;
    }
    printf("%.2f\n",sum/x);
    for(i=0;i<n;i++){
        if(stu[i].result==0){
            cout<<stu[i].name<<endl;
        }
    }
}