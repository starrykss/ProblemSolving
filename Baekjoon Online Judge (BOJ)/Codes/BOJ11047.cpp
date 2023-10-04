#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, K, value, cnt;
vector<int> values;

void Input() {
    cin >> N >> K;
    for (int i = 1; i <= N; i++) {
        cin >> value;
        values.push_back(value);
    }
}

int Solution(int k) {
    sort(values.begin(), values.end(), greater<int>());    // 내림차순 정렬

    for (auto i : values) {
        if (i <= k) {
            // cout << "[i] : " << i << " [k / i] : " << k / i << " ";
            cnt += (k / i);
            // cout << "[cnt] : " << cnt << " ";
            k -= ((k / i) * i);
            // cout << "[k] : " << k << '\n';
        }
    }
    return cnt;
}

void Output() {
    cout << Solution(K) << '\n';
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