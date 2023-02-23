#include <iostream>
using namespace std;

int N, M, i, j;
int baskets[101];

void Initialize() {
    for (int i = 1; i <= 100; i++) {    
        baskets[i] = i;    // 1번째부터 N번째 바구니에 1부터 N까지의 숫자 넣기
    }
}

void Input() {
    cin >> N >> M;

    for (int a = 1; a <= M; a++) {
        cin >> i >> j;

        // Swap
        int tmp = baskets[i];
        baskets[i] = baskets[j];
        baskets[j] = tmp;
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
    Initialize();
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