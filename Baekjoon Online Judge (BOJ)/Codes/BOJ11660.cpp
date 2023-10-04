#include <iostream>
using namespace std;

int N, M;
int matrix[1025][1025];
int pSum[1025][1025];
int x1, x2, y1, y2; 

void Solution() {
    cin >> N >> M;

    // 표 채우기
    for (int r = 1; r <= N; r++) {
        for (int c = 1; c <= N; c++) {
            cin >> matrix[r][c];
            pSum[r][c] = pSum[r - 1][c] + pSum[r][c - 1] - pSum[r - 1][c - 1] + matrix[r][c];
        }
    }

    // 구해야 하는 좌표 입력 받기 : (x1, y1), (x2, y2)
    for (int i = 1; i <= M; i++) {
        cin >> x1 >> y1 >> x2 >> y2;

        cout << pSum[x2][y2] - (pSum[x1 - 1][y2] + pSum[x2][y1 - 1]) + pSum[x1 - 1][y1 - 1] << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solution();

    return 0;
}