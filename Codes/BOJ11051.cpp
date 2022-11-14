#include <iostream>
using namespace std;

#define DIV 10007

int dp[1001][1001], N, K;

int nCk(int n, int k) {
    if (dp[n][k] > 0) return dp[n][k];
    else if (k == 0 || k == n) return dp[n][k] = 1;
    else if ((0 < k) && (k < n)) return dp[n][k] = (nCk(n - 1, k - 1) + nCk(n - 1, k)) % DIV;
    else return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;
    
    cout << nCk(N, K) << '\n';

    return 0;
}