#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    cout<<"1000 = "<<n/1000<<endl;
    n-=n/1000 * 1000;
    cout<<"500 = "<<n/500<<endl;
    n-=n/500 * 500;
    cout<<"100 = "<<n/100<<endl;
    n-=n/100 * 100;
    cout<<"50 = "<<n/50<<endl;
    n-=n/50 * 50;
    cout<<"20 = "<<n/20<<endl;
    n-=n/20 * 20;
    cout<<"10 = "<<n/10<<endl;
    n-=n/10 * 10;
    cout<<"5 = "<<n/5<<endl;
    n-=n/5 * 5;
    cout<<"1 = "<<n;
}