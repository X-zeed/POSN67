#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int x, n, i, j,a=0;
    cin >> x >> n;
    string s;
    cin.ignore();
    getline(cin, s);
    int len = s.size();
    char s_sum[n][len],s1[len];
    for (i = 0; i < n; i++){
        for(j=0;j<len;j++){
            s_sum[i][j]='\0';
        }
    }
    for (i = 0; i < n; i++){
        for(j=0;j<len;j++){
            cout<<s_sum[i][j];
        }
        cout<<endl;
    }
    int count[n];
    for(i=0;i<n;i++){count[i]=0;}
    while (x * n != 0)
    {
        // case 1 เข้ารหัส
        if (x == 1)
        {
            // เตรียมสตริง
            for (i = 0; i < len; i++)
            {
                if (s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122)
                {
                    s1[a] = char(toupper(int(s[i])));
                    a++;
                }
            }
            s = s1;
            // แบ่งบรรทัด
            for (i = 0; i < len; i++)
            {
                s_sum[i%n][count[i%n]]=s[i%n];
                count[i%n]++;
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<len;j++){
                cout<<s_sum[i];
            }
            cout<<endl;
        }
        cout<<endl;
        cin >> x >> n;
        if (x * n == 0){return 0;}
        cin.ignore();
        getline(cin, s);
    }
}