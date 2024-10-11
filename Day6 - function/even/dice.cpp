#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,a,b,c;
    cin>>a>>b>>c;
    //               1     2     3     4     5     6  
    string s1[] = {"   ","  *","  *","* *","* *","* *"},
           s2[] = {" * ","   "," * ","   "," * ","* *"},
           s3[] = {"   ","*  ","*  ","* *","* *","* *"};
    for(i=0;i<3;i++){
        cout<<"| ";
        if(i==0){
            cout<<s1[a-1];
            cout<<" | ";
            cout<<s1[b-1];
            cout<<" | ";
            cout<<s1[c-1];
            cout<<" | ";
            }
            else if(i==1){
                cout<<s2[a-1];
                cout<<" | ";
                cout<<s2[b-1];
                cout<<" | ";
                cout<<s2[c-1];
                cout<<" | ";
            }
            else if(i==2){
                cout<<s3[a-1];
                cout<<" | ";
                cout<<s3[b-1];
                cout<<" | ";
                cout<<s3[c-1];
                cout<<" | ";
            }
        cout<<endl;
    }
}