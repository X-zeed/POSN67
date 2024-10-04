#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n < 100 || n > 20000)
    {
        cout << "ERROR";
    }
    else
    {
        if (n / 1000 >= 1)
        {
            cout << "1000 = " << n / 1000 << endl;
            
        }
        n -= n / 1000 * 1000;
        if (n / 500 >= 1)
        {
            cout << "500 = " << n / 500 << endl;
            
        }
        n -= n / 500 * 500;
        if (n / 100 >= 1)
        {
            cout << "100 = " << n / 100 << endl;
        }
        
    }
}