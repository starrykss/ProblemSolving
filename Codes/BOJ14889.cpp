#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int N, ans(INT_MAX);
int stats[20][20], team1[10], team2[10];
int pick[20];

void Input() {
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> stats[i][j];
        }
    }
}

void Output() {
    cout << ans << '\n';
}

void Update() {
    int team1_size = 0, team2_size = 0;
    for (int i = 0; i < N; i++) {
        if (pick[i] == 0) {
            team1[team1_size++] = i;
        }
        else {
            team2[team2_size++] = i;
        }
    }

    int sum_1 = 0, sum_2 = 0;
    for (int i = 0; i < N / 2; i++) {
        for (int j = i + 1; j < N / 2; j++) {
            sum_1 += stats[team1[i]][team1[j]] + stats[team1[j]][team1[i]];
            sum_2 += stats[team2[i]][team2[j]] + stats[team2[j]][team2[i]];
        }
    }
    if (ans > abs(sum_1 - sum_2)) {
        ans = abs(sum_1 - sum_2);
    }
}

void DFS(int cur, int pick_count) {
    if (pick_count == (N / 2)) {
        Update();
        return;
    }

    for (int i = cur; i < N; i++) {
        pick[i] = 1;
        DFS(i + 1, pick_count + 1);
        pick[i] = 0;
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Input();
    DFS(0, 0);
    Output();

    return 0;
}