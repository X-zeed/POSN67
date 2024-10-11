#include <iostream>
#include <vector>
#include <string>
using namespace std;

int t = 1;

void Permu(vector<string>& arr, int left, int right);

int main()
{
    int n;
    cin >> n;
    vector<string> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Permu(arr, 0, n - 1);
}

void Permu(vector<string>& arr, int left, int right)
{
    if (left == right)
    {
        cout << t << ".";
        for (int i = 0; i <= right; i++)
        {
            cout << arr[i];
            if (i < right)
                cout << ",";
        }
        cout << endl;
        t++;
        return;
    }

    for (int i = left; i <= right; i++)
    {
        swap(arr[left], arr[i]);
        Permu(arr, left + 1, right);
        swap(arr[left], arr[i]);
    }
}
