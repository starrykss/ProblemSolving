#include <iostream>
#include <cmath>
using namespace std;

int N;
int nums[1001];
int dp_LIS[1001];
int dp_LDS[1001];
int dp_result[1001];

void Input() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> nums[i];
    }
}

void findLIS(int n) {
    fill_n(dp_LIS, 1001, 1);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            if (nums[j] < nums[i]) {
                dp_LIS[i] = max(dp_LIS[j] + 1, dp_LIS[i]);    
            }
        }
    }
}

void findLDS(int n) {
    fill_n(dp_LDS, 1001, 1);

    for (int i = n; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            if (nums[i] > nums[j]) {
                dp_LDS[i] = max(dp_LDS[i], dp_LDS[j] + 1);
            }
        }
    }
}

int Solution(int n) {
    int result = 0;

    findLIS(n);    // LIS 구하기
    findLDS(n);    // LDS 구하기

    for (int i = 1; i <= n; i++) {
        dp_result[i] = dp_LIS[i] + dp_LDS[i] - 1;   // Sk가 2번 세어졌으므로 1을 빼준다.
        result = max(result, dp_result[i]);    // 최댓값 구하기
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