#include <iostream>
using namespace std;

int N, M, value;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    // 2차원 배열 동적 할당
    int** matrix = new int*[N];
    for (int i = 0; i < N; i++) {
        matrix[i] = new int[M];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }

    // 입력 받은 값들을 바로 바로 행렬의 요소와 연산 수행
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> value;
            matrix[i][j] += value;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << '\n';
    }

    // 동적 할당 해제
    for (int i = 0; i < N; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}