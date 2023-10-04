#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int N, M, K, value;
char board[2001][2001];
int pSum[2001][2001];

void Input() {
    cin >> N >> M >> K;
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cin >> board[i][j];
        }
    }
}

int Solution(char startColor) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            if ((i + j) % 2 == 0) {
                if (board[i][j] == startColor) {
                    value = 0;
                }
                else {
                    value = 1;
                }
            }
            else {
                if (board[i][j] == startColor) {
                    value = 1;
                }
                else {
                    value = 0;
                }
            }
            
            // 부분 합 구하기
            pSum[i][j] = pSum[i][j - 1] + pSum[i - 1][j] - pSum[i - 1][j - 1] + value;
        }
    }
    
    int count = INT_MAX;
    
    for (int i = 1; i <= N - K + 1; i++) {
        for (int j = 1; j <= M - K + 1; j++) {
            // K*K 구간의 누적 합의 최솟값 구하기
            count = min(count, pSum[i + K - 1][j + K - 1] - (pSum[i + K - 1][j - 1] + pSum[i - 1][j + K - 1]) + pSum[i - 1][j - 1]);
        }
    }
    return count;
}

void Output() {
    cout << min(Solution('W'), Solution('B')) << '\n';
}

void Solve() {
    Input();
    Output();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    Solve();
    
    return 0;
}