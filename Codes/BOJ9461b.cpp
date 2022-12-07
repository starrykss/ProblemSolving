#include <iostream>
#include <vector>
using namespace std;

using ULL = unsigned long long;

int T, N;
vector<ULL> dp;

void Input() {
    cin >> N;
    dp.resize(N + 1);
}

// P(1) = P(2) = P(3) = 1 (N < 4)
// P(N) = P(N - 2) + P(N - 3) (N >= 4)
ULL Calc(int n) {
    dp[1] = dp[2] = dp[3] = 1;

    for (int i = 4; i <= n; i++) {
        dp[i] = dp[i - 2] + dp[i - 3];
    }

    return dp[n];
}

void Output() {
    cout << Calc(N) << '\n';
    dp.empty();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;
    for (int i = 0; i < T; i++) {
        Input();
        Output();
    }    

    return 0;
}