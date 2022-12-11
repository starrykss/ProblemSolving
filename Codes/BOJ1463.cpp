#include <iostream>
#include <cmath>
using namespace std;

int N;
int dp[1000001];

void Input() {
    cin >> N;
}

int Solution(int n) {
    dp[1] = 0;    // 1의 경우 연산 횟수 0
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + 1; 
        if (i % 2 == 0) {    // 2로 나누어 떨어질 경우
            dp[i] = min(dp[i], dp[i / 2] + 1);    
        }
        if (i % 3 == 0) {    // 3으로 나누어 떨어질 경우
            dp[i] = min(dp[i], dp[i / 3] + 1);
        }
    }
    return dp[n];
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