#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,x,y;
    string user,pass;
    int money;
    cin>>n;
    tuple<string , int , string> tp[n];
    for(i=0;i<n;i++){
        cin>>user>>money>>pass;
        tp[i] = make_tuple(user,money,pass);
    }
    cin>>pass;
    for(i=0;i<n;i++){
        if(get<2>(tp[i]) == pass){
            cout<<get<0>(tp[i])<<endl<<get<1>(tp[i])<<endl;
            while(cin>>x){
                if(x==1){
                    cin>>y;
                    get<1>(tp[i]) += y;
                }
                else if(x==2){
                    cin>>y;
                    get<1>(tp[i]) -= y;
                }
                else if(x==3){
                    cout<<get<1>(tp[i])<<endl;
                }
                else if(x==4){
                    return 0;
                }
                else if(x==5){
                    string pass2;
                    cin>>pass2>>y;
                    get<1>(tp[i]) -= y;
                    for(j=0;j<n;j++){
                        if(get<2>(tp[j]) == pass2){
                            get<1>(tp[j]) += y;
                            cout<<get<0>(tp[j])<<endl<<get<1>(tp[j])<<endl;
                            cout<<get<0>(tp[i])<<endl<<get<1>(tp[i])<<endl;
                        }
                    }
                }
            }
        }
    }
}