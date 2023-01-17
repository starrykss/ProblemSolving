#include <iostream>
using namespace std;

using ull = unsigned long long;

int N, M, num;
ull pSum[1000001];
ull cnt[1001];
ull answer;

void Input() {
    cin >> N >> M;
}

ull Combination(ull n) {
    return (n * (n - 1)) / 2;
}

ull Solution(int n, int m) {
    for (int i = 1; i <= n; i++) {
        cin >> num;
        
        pSum[i] = pSum[i - 1] + num;    // 구간 합 구하기
        cnt[pSum[i] % M]++;
    }

    for (int i = 0; i < m; i++) {
        answer += Combination(cnt[i]);    // nC2 구하기
    }

    return cnt[0] + answer;
}

void Output() {
    cout << Solution(N, M) << '\n';
}

void Solve() {
    Input();
    Output();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();

    return 0;
}