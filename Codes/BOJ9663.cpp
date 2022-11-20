#include <iostream>
using namespace std;

#define MAX_SIZE 15

int N, cnt;
int column[MAX_SIZE];

bool Promising(int level) {
    for (int i = 0; i < level; i++) {
        if (column[i] == column[level] || abs(column[level] - column[i]) == level - i) {    // 대각선이거나 같은 라인, column[i] : x 좌표, i : y좌표
            return false;
        }
    }
    return true;
}

void nQueens(int x) {
    if (x == N) {
        cnt++;
    }
    else {
        for (int i = 0; i < N; i++) {
            column[x] = i;    // 퀸 배치
            if (Promising(x)) {     // 유효할 경우 다음 행의 퀸 배치, 유효하지 않다면 다른 위치로 퀸 배치
                nQueens(x + 1);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    nQueens(0);
    cout << cnt << '\n';

    return 0;
}