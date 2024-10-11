#include<bits/stdc++.h>
using namespace std;
int swap(int *px,int *py){
    if(*px>*py){
        int temp = *px;
        *px=*py;
        *py=temp;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    swap(&a,&b);
    cout<<a<<" "<<b;
}