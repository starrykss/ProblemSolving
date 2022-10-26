#include <iostream>
using namespace std;

int N, M, a, b, num, pNums[100001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    pNums[0] = 0;
    for (int i = 1; i <= N; i++) {
        cin >> num;
        pNums[i] = pNums[i - 1] + num;    // 입력 받는 동시에 부분합 배열 초기화하기
    }

    for (int i = 1; i <= M; i++) {
        cin >> a >> b;
        cout << pNums[b] - pNums[a - 1] << '\n';
    }

    return 0;
}