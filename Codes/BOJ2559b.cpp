#include <iostream>
#include <algorithm>
using namespace std;

int N, K, tmp, maxNum;
int nums[100001];
int pSums[100001];

void Solve() {
    cin >> N >> K;

    for (int i = 1; i <= N; i++) {
        cin >> nums[i];
        pSums[i] = pSums[i - 1] + nums[i];
    }

    maxNum = pSums[K] - pSums[0];
    for (int i = K; i <= N; i++) {
        tmp = pSums[i] - pSums[i - K];
        maxNum = max(maxNum, tmp);    // 최댓값 구하기
    }

    cout << maxNum << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();

    return 0;
}