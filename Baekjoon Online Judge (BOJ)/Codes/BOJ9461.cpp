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

// P(N) = P(N - 1) + P(N - 5) (N >= 6)
ULL Calc(int n) {
    dp[1] = dp[2] = dp[3]= 1;
    dp[4] = dp[5] = 2;

    for (int i = 6; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 5];
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