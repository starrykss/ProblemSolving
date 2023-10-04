#include <iostream>
#include <cmath>
using namespace std;

int n;
int glass[10001];
int dp[10001];

void Input() {
    cin >> n; 
    for (int i = 1; i <= n; i++) {
        cin >> glass[i];
    }
}

int Solution(int n) {
    dp[1] = glass[1];
    dp[2] = glass[1] + glass[2];

    for (int i = 3; i <= n; i++) {
        dp[i] = max(dp[i - 1], max(dp[i - 2] + glass[i], dp[i - 3] + glass[i - 1] + glass[i]));
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