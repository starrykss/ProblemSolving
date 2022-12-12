#include <iostream>
using namespace std;

#define MOD 1000000000
using ULL = unsigned long long;

int N;
ULL dp[101][10];    // dp[A][B], A : 자릿수, B : 마지막 숫자

void Input() {
    cin >> N;
}

int Solution(int n) {
    ULL result = 0;

    // 한 자릿수의 경우
    for (int i = 1; i <= 9; i++) {
        dp[1][i] = 1;
    }

    // 두 자릿수 이상인 경우
    for (int i = 2; i <= n; i++) {
        dp[i][0] = dp[i - 1][1];    // 마지막 숫자가 0인 경우, 그 뒤에 1만 올 수 있다.
        for (int j = 1; j <= 8; j++) {
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % MOD;   // 마지막 숫자가 1~8인 경우, 그 뒤에 숫자가 2개 (j - 1 또는 j + 1) 올 수 있다.
        }
        dp[i][9] = dp[i - 1][8];    // 마지막 숫자가 9인 경우, 그 뒤에 8만 올 수 있다. 
    }

    for (int i = 0; i <= 9; i++) {
        result += dp[n][i];
    }

    result %= MOD;

    return result;
}

void Output() {
    cout << Solution(N) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Input();
    Output();

    return 0;
}