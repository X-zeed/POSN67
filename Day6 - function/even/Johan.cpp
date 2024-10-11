#include<bits/stdc++.h>
using namespace std;
int main(){
    //ถ้าเป็นตัวพิมพ์เล็กให้ลบ 27
    //ถ้าเป็นตัวพิมพ์ใหญ่ให้บวก11
    string s;
    int i;
    cin>>s;
    for(i=0;i<s.size();i++){
        if(int(s[i])>=97&&int(s[i])<=122){
            cout<<char(int(s[i]-27));
        }
        else{
            cout<<char(int(s[i])+37);
        }
    }
    // cout<<int('V')-int('a')<<endl;
    // cout<<int('H')-int('m')<<endl;
    // cout<<int('O')-int('t')<<endl;
}