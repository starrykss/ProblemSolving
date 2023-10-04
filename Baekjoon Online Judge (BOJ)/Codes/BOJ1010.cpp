#include <iostream>
using namespace std;

int dp[31][31], T, N, M;

int nCk(int n, int k) {
    if (dp[n][k] > 0) return dp[n][k];
    else if (k == 0 || k == n) return dp[n][k] = 1;
    else if ((0 < k) && (k < n)) return dp[n][k] = nCk(n - 1, k - 1) + nCk(n - 1, k);
    else return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> N >> M;
        cout << nCk(M, N) << '\n';
    }

    return 0;
}