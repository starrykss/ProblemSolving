#include <iostream>
#include <cmath>
using namespace std;

int N;
int nums[1001];
int dp[1001];

void Input() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> nums[i];
    }
}

int Solution(int n) {
    int result = 0;

    fill_n(dp, 1001, 1);
    for (int i = n; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            if (nums[j] < nums[i]) {
                dp[i] = max(dp[j] + 1, dp[i]);
            }
        }
        result = max(result, dp[i]);    // 최댓값 구하기
    }

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