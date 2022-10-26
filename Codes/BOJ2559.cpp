#include <iostream>
using namespace std;

int N, K, t, *pTemps, maxNum, tmp;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;

    pTemps = new int[N + 1];
    
    pTemps[0] = 0;
    for (int i = 1; i <= N; i++) {
        cin >> t;
        pTemps[i] = pTemps[i - 1] + t;    // 누적합 구하기
    }

    maxNum = pTemps[K] - pTemps[0];
    for (int i = K; i <= N; i++) {
        tmp = pTemps[i] - pTemps[i - K];
        if (maxNum < tmp) {
            maxNum = tmp;
        }
    }

    cout << maxNum << '\n';

    delete[] pTemps;

    return 0;
}