#include<bits/stdc++.h>
using namespace std;

string str[7]={" ", "25S", "50S", "1B", "2B", "5B", "10B"};

void hanoi(int n, char from, char to, char rest) {
    if (str[n]=="25S") {
        cout << "Move " << str[n] << " from " << from << " to " << to << endl;
        return;
    }
    else {
        hanoi(n-1, from, rest, to);
        cout << "Move " << str[n] << " from " << from << " to " << to << endl;
        hanoi(n-1, rest, to, from);
    }
}

int main() {
    int n; cin >> n;
    hanoi(n, 'A', 'C', 'B');

    return 0;
}