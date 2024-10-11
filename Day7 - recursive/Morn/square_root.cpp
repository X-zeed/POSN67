#include <bits/stdc++.h>
using namespace std;
double srt(double n, double g=1.0) {
    double new_guess=(g+n/g)/2.0;
    if(new_guess==g){return g;}
    return srt(n, new_guess);
}
int main() {
    double n;
    cin>>n;
    if(n<0){return 0;}
    else{cout<<fixed<<setprecision(6)<<srt(n);}
}