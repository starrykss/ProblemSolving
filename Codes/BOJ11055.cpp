#include <iostream>
#include <cmath>
using namespace std;

int A;
int nums[1001];
int dp[1001];

void Input() {
    cin >> A;
    for (int i = 1; i <= A; i++) {
        cin >> nums[i];
    }
}

int Solution(int a) {
    int result = 0;
    // dp 테이블 초기값 세팅
    for (int i = 1; i <= a; i++) {
        dp[i] = nums[i];
    }

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j < i; j++) {
            if (nums[j] < nums[i]) {
                dp[i] = max(dp[j] + nums[i], dp[i]);
            }
        }
        result = max(result, dp[i]);
    }

    return result;
}

void Output() {
    cout << Solution(A) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Input();
    Output();

    return 0;
}