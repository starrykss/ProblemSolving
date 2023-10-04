#include <iostream>
#include <algorithm>
using namespace std;

int N, K;
int W[101];
int V[101];
int dp[101][100001];

void Input() {
    cin >> N >> K;

    for (int i = 1; i <= N; i++) {
        cin >> W[i] >> V[i];
    }
}

int Solution(int n, int k) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1 ; j <= k; j++) {
            if (j >= W[i]) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - W[i]] + V[i]);
            }
            else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][k];
}

void Output() {
    cout << Solution(N, K) << '\n';
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