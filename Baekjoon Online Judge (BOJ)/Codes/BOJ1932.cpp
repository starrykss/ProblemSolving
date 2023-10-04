#include <iostream>
#include <cmath>
using namespace std;

int n;
int dp[501][501];

void Input() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> dp[i][j];
        }
    }
}

int Calc(int n) {
    int result;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0) {
                dp[i][j] += dp[i - 1][0];
            }
            else if (j == i) {
                dp[i][j] += dp[i - 1][j - 1];
            }
            else {
                dp[i][j] += max(dp[i - 1][j - 1], dp[i - 1][j]);
            }
        }
    }

    // 최댓값 구하기
    result = -1;
    for (int i = 0; i < n; i++) {
        if (result < dp[n][i]) {
            result = dp[n][i];
        }
    }

    return result;
}

void Output() {
    cout << Calc(n) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Input();
    Output();

    return 0;
}