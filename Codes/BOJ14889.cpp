#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int N, ans(INT_MAX);
int S[20][20], start[10], link[10];
bool pick[20];

void Input() {
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> S[i][j];
        }
    }
}

void Output() {
    cout << ans << '\n';
}

void Update() {
    int sizeS = 0, sizeL = 0;
    for (int i = 0; i < N; i++) {
        if (pick[i] == false) {    // 선택되지 않은 사람들은 start 팀에 넣기
            start[sizeS++] = i;
        }
        else {    // 선택된 사람들은 link 팀에 넣기
            link[sizeL++] = i;
        }
    }

    int sumS = 0, sumL = 0;
    for (int i = 0; i < N / 2; i++) {
        for (int j = i + 1; j < N / 2; j++) {
            sumS += S[start[i]][start[j]] + S[start[j]][start[i]];
            sumL += S[link[i]][link[j]] + S[link[j]][link[i]];
        }
    }

    if (ans > abs(sumS - sumL)) {    // 최솟값 찾기
        ans = abs(sumS - sumL);
    }
}

void DFS(int start, int cnt) {
    if (cnt == N / 2) {
        Update();
        return;
    }

    for (int i = start; i < N; i++) {
        pick[i] = true;
        DFS(i + 1, cnt + 1);
        pick[i] = false;
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