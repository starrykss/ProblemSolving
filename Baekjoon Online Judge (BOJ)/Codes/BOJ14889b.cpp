#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int N, ans(INT_MAX);
int S[20][20];
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
    int sumS = 0, sumL = 0;
    
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (pick[i] && pick[j]) {    // i와 j가 같은 팀일 때만 점수 계산
                sumS += S[i][j];
                sumS += S[j][i];
            }
            else if (!pick[i] && !pick[j]) {
                sumL += S[i][j];
                sumL += S[j][i];
            }
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