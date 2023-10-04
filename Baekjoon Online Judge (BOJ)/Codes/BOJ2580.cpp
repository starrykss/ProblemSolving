#include <iostream>
using namespace std;

#define MAX_SIZE 9

int board[MAX_SIZE][MAX_SIZE];

void Input() {
    for (int i = 0; i < MAX_SIZE; i++) {
        for (int j = 0; j < MAX_SIZE; j++) {
            cin >> board[i][j];
        }
    }
}

void Print() {
    for (int i = 0; i < MAX_SIZE; i++) {
        for (int j = 0; j < MAX_SIZE; j++) {
            cout << board[i][j] << " ";
        }
        cout << '\n';
    }
}

bool Promising(int row, int col, int num) {
    // (1) 행/열 체크
    for (int i = 0; i < MAX_SIZE; i++) {
        if (board[row][i] == num) {    // 행 체크 : 같은 행에 동일한 숫자가 있을 경우
            return false;
        }
        if (board[i][col] == num) {    // 열 체크 : 같은 열에 동일한 숫자가 있을 경우
            return false;
        }
    }

    // (2) 3x3 박스 체크
    int startRow = (row / 3) * 3;
    int endRow = (row / 3) * 3 + 3;
    int startCol = (col / 3) * 3;
    int endCol = (col / 3) * 3 + 3;

    for (int i = startRow; i < endRow; i++) {
        for (int j = startCol; j < endCol; j++) {
            if (board[i][j] == num) {
                return false;
            }
        }
    }
    return true;
}

void DFS(int cnt) {
    if (cnt == 81) {
        Print();
        exit(0);    // 반드시 exit(0)으로 처리하여 강제 종료! (return으로 처리할 경우, 통과 불가)
    }

    int row = cnt / 9;    // 행 구하기
    int col = cnt % 9;    // 열 구하기

    if (!board[row][col]) {    // 칸이 채워져 있지 않을 경우
        for (int i = 1; i <= MAX_SIZE; i++) {
            if (Promising(row, col, i)) {
                board[row][col] = i;
                DFS(cnt + 1);
                board[row][col] = 0;    // 백트래킹
            }
        }
    }
    else {    // 칸이 채워져 있을 경우
        DFS(cnt + 1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Input();
    DFS(0);

    return 0;
}