#include <iostream>
using namespace std;

#define MAX_SIZE 8

int N, M;
int nums[MAX_SIZE];

void DFS(int n) {
    if (n == M) {    // 깊이가 M에 도달할 경우
        for (int i = 0; i < M; i++) {
            cout << nums[i] << ' ';    // 요소들을 하나씩 출력
        }
        cout << '\n';
    }
    else {    // 깊이가 M에 도달하지 않을 경우
        for (int i = 1; i <= N; i++) {    // 1부터 N까지 출력 (1 이상 N 이하)
            nums[n] = i;    // 출력할 요소들을 추가함.
            DFS(n + 1);    // 더 깊은 곳으로 이동
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    DFS(0);
    
    return 0;
}