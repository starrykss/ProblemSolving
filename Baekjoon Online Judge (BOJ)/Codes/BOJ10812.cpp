#include <iostream>
using namespace std;

int N, M, i, j, k;
int baskets[101];
int tmp[101];

void Initialize() {
    for (int i = 1; i <= 100; i++) {    
        baskets[i] = i;    // 1번째부터 100번째 바구니에 1부터 100까지의 숫자 넣기
    }
}

void Reverse(int begin, int end, int mid) {
    int cnt = 1;

    for (int i = k; i <= end; i++) {
        tmp[cnt++] = baskets[i];
    }
    
    for (int i = begin; i < k; i++) {
        tmp[cnt++] = baskets[i];
    }

    for (int i = begin, idx = 1; (i <= end) && (idx != cnt); i++, idx++) {
        baskets[i] = tmp[idx];
    }
}

void Input() {
    cin >> N >> M;

    for (int a = 1; a <= M; a++) {
        cin >> i >> j >> k;

        Reverse(i, j, k);
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