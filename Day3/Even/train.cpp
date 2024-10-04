#include<bits/stdc++.h>
using namespace std;
int main() {
    int station, n, seat, sum = 0;
    int i, j, k;
    cin >> station >> n >> seat;
    int st[station]; // Array to keep track of seat occupancy at each station
    int order[n][4]; // Stores the reservation order details
    // Initialize all stations to have zero reserved seats
    for (i = 0; i < station; i++) {
        st[i] = 0;
    }
    // Input the reservation orders
    for (i = 0; i < n; i++) {
        for (j = 0; j < 4; j++) {
            cin >> order[i][j]; // Input order details: order[i][0] = No., order[i][1] = Start, order[i][2] = End, order[i][3] = Seats
        }
    }
    // Process each reservation order
    for (i = 0; i < n; i++) { // Loop through each order
        bool canReserve = true; // Flag to check if we can reserve the seats
        // Check seat availability between the start and end stations
        for (j = order[i][1]; j < order[i][2]; j++) {
            if (st[j] + order[i][3] > seat) { // If adding the seats exceeds capacity
                canReserve = false;
                break; // Cannot reserve, break out of the loop
            }
        }
        // If the reservation can be made, update the seat count
        if (canReserve) {
            for (j = order[i][1]; j < order[i][2]; j++) {
                st[j] += order[i][3]; // Add reserved seats to each station between start and end
            }
        } else {
            // If reservation cannot be made, add the order number to the sum
            sum += order[i][0];
        }
    }
    cout << sum; // Output the sum of order numbers that couldn't reserve seats
}