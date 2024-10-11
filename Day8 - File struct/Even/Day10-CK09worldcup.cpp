#include <bits/stdc++.h>
using namespace std;
struct team {
    string name;
    int score = 0;
    int re = 0;
    int point = 0;
};

bool rak(team &a, team&b)
{
    if(a.score == b.score){
        if(a.re == b.re) return a.point > b.point;
        else return a.re > b.re;
    }else return a.score > b.score;
}

int main()
{
    team n[4];
    for(int i =0; i < 4; i++){
        cin >> n[i].name;
    }
	int a[4][4];
    for(int i =0 ; i < 4; i++){
        for(int j =0; j < 4; j++){
            cin >> a[i][j];
        }
    }
    for(int i =0 ; i < 4; i++){
        for(int j =0; j < 4; j++){
           if(i!=j){
                if(a[i][j] > a[j][i])n[i].score+=3;
                else if(a[i][j] == a[j][i])n[i].score++;
           }
        n[i].re += a[i][j];
        n[j].re -= a[i][j];
        n[i].point += a[i][j];
        }
    }
    sort(n,n+4,rak);
    for(int i =0; i < 4; i++){
        cout << n[i].name << " " << n[i].score << '\n';
    }
}