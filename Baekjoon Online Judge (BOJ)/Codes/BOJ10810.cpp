#include <iostream>
using namespace std;

int N, M, i, j, k;
int baskets[101];

void Input() {
    cin >> N >> M;

    for (int a = 1; a <= M; a++) {
        cin >> i >> j >> k;

        for (int b = i; b <= j; b++) {
            baskets[b] = k;
        }
    }
}

void Solution(int *ary) {
    for (int i = 1; i <= N; i++) {
        cout << baskets[i] << " ";
    }
}

void Output() {
    Solution(baskets);
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