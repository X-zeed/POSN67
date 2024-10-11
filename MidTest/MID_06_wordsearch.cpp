#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int m,n,j,i,k,a=0,c=0,len=0;
    bool find=false;
    string sf;
    cin>>m>>n;
    char s[m][n];
    for(i=0;i<m;i++){for(j=0;j<n;j++){cin>>s[i][j];}}
    cin>>sf;
    len=sf.size();
    char sa[len];
    for(i=0;i<len;i++){sa[i]='\0';}
    //หาแนวนอน ซ้าย-ขวา
    for(i=0;i<len;i++){sa[i]='\0';}
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(j+len<=n){
                c=0;
                while(c<len){
                    sa[c]=s[i][j+c];
                    c++;
                }
                for(k=len;sa[k]!='\0';k++){sa[k]='\0';}
                if(sa==sf){
                    cout<<"found "<<i<<","<<j<<" "<<i<<","<<j+len-1;
                    find = true;
                    return 0;
                }
            }
        }
    }
    //หาแนวนอน ขวา-ซ้าย
    for(i=0;i<len;i++){sa[i]='\0';}
    for(i=0;i<m;i++){
        for(j=n-1;j>=0;j--){
            if(j-len+1>0){
                c=0;
                while(c<len){
                    sa[c]=s[i][j-c];
                    c++;
                }
                for(k=len;sa[k]!='\0';k++){sa[k]='\0';}
                if(sa==sf){
                    cout<<"found "<<i<<","<<j<<" "<<i<<","<<j-len+1;
                    find = true;
                    return 0;
                }
            }
        }
    }
    //หาแนวตั้ง บน-ล่าง
    for(i=0;i<len;i++){sa[i]='\0';}
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i+len<=m){
                c=0;
                while(c<len){
                    sa[c]=s[i+c][j];
                    c++;
                }
                for(k=len;sa[k]!='\0';k++){sa[k]='\0';}
                if(sa==sf){
                    cout<<"found "<<i<<","<<j<<" "<<i+len-1<<","<<j;
                    find = true;
                    return 0;
                }
            }
        }
    }
    //หาแนวตั้ง ล่าง-บน
    for(i=0;i<len;i++){sa[i]='\0';}
    for(i=m-1;i>0;i--){
        for(j=0;j<n;j++){
            if(i-len+1>=0){
                c=0;
                while(c<len){
                    sa[c]=s[i-c][j];
                    c++;
                }
                for(k=len;sa[k]!='\0';k++){sa[k]='\0';}
                if(sa==sf){
                    cout<<"found "<<i<<","<<j<<" "<<i-len+1<<","<<j;
                    find = true;
                    return 0;
                }
            }
        }
    }
    // หาแนวแทยงจากบนลงล่าง ซ้าย-ขวา
    for(i=0;i<len;i++){sa[i]='\0';}
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i+len<=m&&j+len<=n){
                c=0;
                while(c<len){
                    sa[c]=s[i+c][j+c];
                    c++;
                }
                for(k=len;sa[k]!='\0';k++){sa[k]='\0';}
                // cout<<sa;
                if(sa==sf){
                    cout<<"found "<<i<<","<<j<<" "<<i+len-1<<","<<j+len-1;
                    find = true;
                    return 0;
                }
            }
        }
    }
    //หาแนวแทยงจากบนลงล่าง ขวา-ซ้าย
    for(i=0;i<len;i++){sa[i]='\0';}
    for(i=0;i<m;i++){
        for(j=n-1;j>0;j--){
            if(i+len<=m&j-len+1>0){
                c=0;
                while(c<len){
                    sa[c]=s[i+c][j-c];
                    c++;
                }
                for(k=len;sa[k]!='\0';k++){sa[k]='\0';}
                if(sa==sf){
                    cout<<"found "<<i<<","<<j<<" "<<i+len-1<<","<<j-len+1;
                    find = true;
                    return 0;
                }
            }
        }
        
    }
    //หาแนวแทยงจากล่างขึ้นบน ขวา-ซ้าย
    for(i=0;i<len;i++){sa[i]='\0';}
    for(i=m-1;i>0;i--){
        for(j=n-1;j>0;j--){
            if(i-len+1>0&j-len+1>0){
                c=0;
                while(c<len){
                    sa[c]=s[j-c][j-c];
                    // cout<<j-c<<j-c;
                    c++;
                }
                for(k=len;sa[k]!='\0';k++){sa[k]='\0';}
                if(sa==sf){
                    cout<<"found "<<i<<","<<j<<" "<<i-len<<","<<j-len;
                    find = true;
                    return 0;
                }
            }
        }
    }
    //หาแนวแทยงจากล่างขึ้นบน ซ้าย-ขวา
    for(i=0;i<len;i++){sa[i]='\0';}
    for(i=0;i<m;i++){
        for(j=n-1;j>0;j--){
            if(i+len<=m&j-len+1>0){
                c=0;
                while(c<len){
                    sa[c]=s[j-c][i+c];
                    c++;
                }
                for(k=len;sa[k]!='\0';k++){sa[k]='\0';}
                if(sa==sf){
                    cout<<"found "<<j<<","<<i<<" "<<j-len+1<<","<<i+len-1;
                    find = true;
                    return 0;
                }
            }
        }
    }
    if(find==false){
        cout<<"not found";
        return 0;
    }
}