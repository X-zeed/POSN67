#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j;
    string n;
    cin>>n;
    //               0     1     2     3     4     5     6     7     8     9
    string s1[] = {" _ ","   "," _ "," _ ","   "," _ "," _ "," _ "," _ "," _ "},
           s2[] = {"| |","  |"," _|"," _|","|_|","|_ ","|_ ","  |","|_|","|_|"},
           s3[] = {"|_|","  |","|_ "," _|","  |"," _|","|_|","  |","|_|"," _|"};
    for(i=0;i<3;i++){
        cout<<"| ";
        for(j=0;j<n.size();j++){
            if(i==0){
                cout<<s1[int(n[j])-48];
            }
            else if(i==1){
                cout<<s2[int(n[j])-48];
            }
            else if(i==2){
                cout<<s3[int(n[j])-48];
            }
            cout<<" | ";
        }
        cout<<endl;
    }
}