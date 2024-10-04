#include <bits/stdc++.h>
using namespace std;
int main()
{
    int key, i, found = 0, ansInd = 0;
    int low = 0;
    int high = 7;
    int mid;
    int unsortedlist[] = {1, 4, 9, 3, 5, -3, 6, 2};
    int list[] = {-3, 1, 2, 3, 4, 5, 6, 9};
    cout << "Please enter number to be search:";
    cin >> key;
    while (low <= high)
    {
        mid = (low + high) / 2;
        cout << "mid= " << mid << endl;
        if (key == list[mid])
        {
            ansInd = mid;
            found = 1;
            break;
        }
        else if (key < list[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (found)
    {
        cout << key << " is in position " << ansInd + 1 << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    return 0;
}
