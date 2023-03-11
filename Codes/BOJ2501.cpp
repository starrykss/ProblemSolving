#include <iostream>
#include <vector>
using namespace std;

int N, K;
vector<int> divisors;

void Input() {
    cin >> N >> K;
}

int Solution(int n, int k) {
    int answer;

    for (int num = 1; num <= n; num++) {
        if (n % num == 0) {
            divisors.push_back(num);
        }
    }

    answer = (k <= divisors.size()) ? divisors[k - 1] : 0;    // 범위 초과ㄴ

    return answer;
}

void Output() {
    cout << Solution(N, K) << '\n';
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