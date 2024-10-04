#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {15, 34, 28, 36, 11}, i, j, temp;
    for (j = 3; j >= 0; j--)
    {
        for (i = 0; i <= j; i++)
        {
            if (a[i] >a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    for (i = 0; i <= 4; i++)
        cout << a[i]<<endl;
}