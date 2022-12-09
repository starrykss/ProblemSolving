#include <iostream>
#include <cmath>
using namespace std;

int n;
int stairs[301];
int dp[301];

void Input() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> stairs[i];
    }
}

int Solution(int n) {
    dp[1] = stairs[1];
    dp[2] = max(stairs[2], stairs[1] + stairs[2]);
    dp[3] = max(stairs[1] + stairs[3], stairs[2] + stairs[3]);
    for (int i = 4; i <= n; i++) {
        dp[i] = max(dp[i - 3] + stairs[i - 2] + stairs[i], dp[i - 2] + stairs[i]);
    }

    return dp[n];
}

void Output() {
    cout << Solution(n) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Input();
    Output();

    return 0;
}