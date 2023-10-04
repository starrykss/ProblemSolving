#include <iostream>
#include <cmath>
using namespace std;

int N;
int rgb[1002][3];

void Input() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> rgb[i][j];
        }
    }
}

int Calc(int n) {
    int result;
    
    // 문제의 조건에 맞는 최솟값의 가중치들의 합을 누적해나간다.
    for (int i = 1; i <= n; i++) {
        rgb[i][0] += min(rgb[i - 1][1], rgb[i - 1][2]);
        rgb[i][1] += min(rgb[i - 1][0], rgb[i - 1][2]);
        rgb[i][2] += min(rgb[i - 1][0], rgb[i - 1][1]);
    }

    // 최솟값 구하기
    result = min(rgb[n][0], (rgb[n][1], rgb[n][2]));

    return result;
}

void Output() {
    cout << Calc(N) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Input();
    Output();

    return 0;
}