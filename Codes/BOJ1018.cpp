#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/* 8x8 Chess Board 
 * ■□■□■□■□    □■□■□■□■
 * □■□■□■□■    ■□■□■□■□
 * ■□■□■□■□    □■□■□■□■
 * □■□■□■□■    ■□■□■□■□
 * ■□■□■□■□    □■□■□■□■
 * □■□■□■□■    ■□■□■□■□
 * ■□■□■□■□    □■□■□■□■
 * □■□■□■□■    ■□■□■□■□
 * 
 * - M x N 크기의 보드를 8x8 크기로 잘라낸 후, 체스판으로 만들기 위해 몇 개의 정사각형을 다시 칠한다. (8x8 크기의 체스판은 아무데서나 골라도 된다.)
 * - 다시 칠해야 하는 정사각형의 최소 개수를 구하자.
 */

int N, M;
vector<int> nums;
char board[51][51], chessBoard[8][8];
char type1[8][8] = { { 'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B' },
                     { 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W' },
                     { 'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B' },
                     { 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W' },
                     { 'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B' },
                     { 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W' },
                     { 'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B' },
                     { 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W' }};

char type2[8][8] = { { 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W' },    
                     { 'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B' },
                     { 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W' },
                     { 'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B' },
                     { 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W' },
                     { 'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B' },
                     { 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W' },
                     { 'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B' } };


int findNumOfSquares(char board[][8]) {    // 매개 변수로 2차원 배열 사용하기
    int cnt1, cnt2, minNum;

    cnt1 = 0;
    cnt2 = 0;

    // type1 체크 : 왼쪽 상단 위가 W로 시작할 경우
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[i][j] != type1[i][j]) {
                cnt1++;
            }
        }
    }

    // type2 체크 : 왼쪽 상단 위가 B로 시작할 경우
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[i][j] != type2[i][j]) {
                cnt2++;
            }
        }
    }

    minNum = min(cnt1, cnt2);

    return minNum;
}

int BruteForce(int n, int m) {
    for (int i = 0; i + 8 <= n; i++) {
        for (int j = 0; j + 8 <= m; j++) {
            for (int k = 0; k < 8; k++) {
                for (int l = 0; l < 8; l++) {
                    chessBoard[k][l] = board[i + k][j + l];
                }
            }
            nums.push_back(findNumOfSquares(chessBoard));
        }
    }

    sort(nums.begin(), nums.end());    // 오름차순 정렬

    return nums[0];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;    // N x M (행 : N, 열 : M)

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> board[i][j];
        }
    }
    
    cout << BruteForce(N, M) << endl;

    return 0;
}

/*
bool check[8][8];

int findNumOfSquares2(char board[][9]) {    // 매개 변수로 2차원 배열 사용하기
    int cnt;

    // 잘못된 곳을 찾아서 새로 칠하기
    cnt = 0;
    for (int p = 0; p < 7; p++) {
        for (int q = 0; q < 7; q++) {
            if (board[p][q] == 'W') {
                if (board[p + 1][q] == 'W') {      // 세로줄 판별
                   board[p + 1][q] = 'B';          // 페인트 칠하기
                   check[p + 1][q] = true;         // 표시하기
                }
                else {
                    if (board[p][q + 1] == 'W') {  // 가로줄 판별
                        board[p][q + 1] = 'B';     // 페인트 칠하기
                        check[p][q + 1] = true;    // 표시하기
                    }
                }
            }
            else {
                if (board[p + 1][q] == 'B') {     // 세로줄 판별
                    board[p + 1][q] = 'W';        // 페인트 칠하기
                    check[p + 1][q] = true;       // 표시하기
                }
                else {
                    if (board[p][q + 1] == 'B') {  // 가로줄 판별
                        board[p][q + 1] = 'W';     // 페인트 칠하기
                        check[p][q + 1] = true;    // 표시하기
                    }
                }
            }
        }
    }
    
    // 최솟값 구하기
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (check[i][j] != 0) {
                cnt++;
            }
        }
    }

    return cnt;
}
*/