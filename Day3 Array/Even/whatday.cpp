#include <bits/stdc++.h>
using namespace std;
int main() {
	int day,month,today; 
    cin>>day>>month>>today;
    int month_list[12]= {0,31,28,31,30,31,30,31,31,30,31,30};
    for(int i=0;i<month;i++){
        day+=month_list[i];
    }
    int Day_Left=365-day;
    int Day_dif=Day_Left%7;
    if(6- (Day_dif+today)%7==0){
        cout<<"7";
    }
    else {
        cout<<6-(Day_dif+today)%7;
    }
}