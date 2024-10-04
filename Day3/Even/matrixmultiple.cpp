#include<bits/stdc++.h>
using namespace std;

int main() {
    int m, p, q, n, i, j, k;
    cin >> m >> p;
    int x[m][p];
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            cin >> x[i][j];
        }
    }
    cin >> q >> n;
    int y[q][n];
    for (i = 0; i < q; i++) {
        for (j = 0; j < n; j++) {
            cin >> y[i][j];
        }
    }
    int result[m][n];
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            result[i][j] = 0;
            for (k = 0; k < p; k++) {
                result[i][j] += x[i][k] * y[k][j];
            }
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}