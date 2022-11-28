#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int N, minNum(INT_MAX), maxNum(INT_MIN);
int nums[12], ops[4];

void Input() {
    cin >> N;

    // 숫자 넣기
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    // 연산자 개수 넣기 
    //// ops[0] : 덧셈, ops[1] : 뺄셈, ops[2] : 곱셈, ops[3] : 나눗셈
    for (int i = 0; i < 4; i++) {
        cin >> ops[i];
    }
}

void Print() {
    cout << maxNum << '\n' << minNum << '\n';
}

void DFS(int cnt, int res) {
    if (cnt == N) {
        maxNum = max(maxNum, res);    // 최댓값 업데이트
        minNum = min(minNum, res);    // 최솟값 업데이트
        return;
    }
    for (int i = 0; i < 4; i++) {
        if (ops[i] != 0) {
            ops[i]--;    // 선택하기
            switch (i) {
                case 0:
                    DFS(cnt + 1, res + nums[cnt]);   // 더하기
                    break;
                case 1:
                    DFS(cnt + 1, res - nums[cnt]);   // 빼기
                    break;
                case 2:
                    DFS(cnt + 1, res * nums[cnt]);   // 곱하기
                    break;
                case 3:
                    DFS(cnt + 1, res / nums[cnt]);   // 나누기
                    break;
            }
            ops[i]++;    // 되돌리기 (백트래킹)
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Input();
    DFS(1, nums[0]);
    Print();

    return 0;
}