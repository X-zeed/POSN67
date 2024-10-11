#include <bits/stdc++.h>
using namespace std;

struct Team {
    string name;
    int score = 0, goalDiff = 0, totalGoals = 0;
};

bool compare(const Team &a, const Team &b) {
    if (a.score != b.score) return a.score > b.score;
    if (a.goalDiff != b.goalDiff) return a.goalDiff > b.goalDiff;
    return a.totalGoals > b.totalGoals;
}

int main() {
    Team teams[4];
    for (auto &t : teams) cin >> t.name;

    int results[4][4];
    for (auto &row : results)
        for (auto &x : row) cin >> x;

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (i != j) {
                if (results[i][j] > results[j][i]) teams[i].score += 3;
                else if (results[i][j] == results[j][i]) teams[i].score++;

                teams[i].goalDiff += results[i][j] - results[j][i];
                teams[i].totalGoals += results[i][j];
            }
        }
    }

    sort(teams, teams + 4, compare);
    for (const auto &t : teams)
        cout << t.name << " " << t.score << '\n';
}
