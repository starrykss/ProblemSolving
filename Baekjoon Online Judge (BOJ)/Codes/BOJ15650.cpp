/* Backtracking */
/* DFS를 통한 조합 구하기 */

#include <iostream>
using namespace std;

#define MAX_SIZE 8

int N, M;
int nums[MAX_SIZE];
bool visited[MAX_SIZE];

void DFS(int start, int num) {
    if (num == M) {    // 목표인 M까지 도달했을 경우 (종료 조건)
        for (int i = 0; i < M; i++) {
            cout << nums[i] << " ";    // nums에 저장한 값을 M개 만큼 출력
        }
        cout << '\n';
    }
    else {    // 목표에 도달하지 못했을 경우
        for (int i = start; i <= N; i++) {    // start부터 N까지 탐색
            if (!visited[i]) {     // 방문하지 않았을 경우
                visited[i] = true;     // 방문 처리 (1) : 방문 표시
                nums[num] = i;         // 방문 처리 (2) : nums에 i값 저장
                DFS(i, num + 1);       // 더 깊게 들어가기 (M까지), for 문의 i를 재귀함수의 인자로 넣어줌.
                visited[i] = false;    // 방문 초기화 (*백트래킹 설정)
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    DFS(1, 0);

    return 0;
}