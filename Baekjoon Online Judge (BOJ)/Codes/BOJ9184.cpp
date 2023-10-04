#include <iostream>
using namespace std;

int a, b, c;
int w[21][21][21];

int W(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return 1;    // 종료 조건
    }
    if (a > 20 || b > 20 || c > 20) {
        return W(20, 20, 20);
    }
    else if (a < b && b < c) {
        return W(a, b, c - 1) + W(a, b - 1, c - 1) - W(a, b - 1, c);
    }
    else {
        return W(a - 1, b, c) + W(a - 1, b - 1, c) + W(a - 1, b, c - 1) - W(a - 1, b - 1, c - 1);
    }
}

int W_DP(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return 1;    // 종료 조건
    }
    else if (a > 20 || b > 20 || c > 20) {
        return W_DP(20, 20, 20);    //  20 초과 수는 재귀 함수를 이용하여 범위를 줄여준다.
    }
    else if (w[a][b][c]) {     // 배열에 값이 있으면
        return w[a][b][c];
    }
    else if (a < b && b < c) {
        w[a][b][c] = W_DP(a, b, c - 1) + W_DP(a, b - 1, c - 1) - W_DP(a, b - 1, c);
    }
    else {
        w[a][b][c] = W_DP(a - 1, b, c) + W_DP(a - 1, b - 1, c) + W_DP(a - 1, b, c - 1) - W_DP(a - 1, b - 1, c - 1);
    }

    return w[a][b][c];
}

void Input() {
    cin >> a >> b >> c;
}

void Output() {
    cout << "w(" << a << ", " << b << ", " << c << ") = " << W_DP(a, b, c) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true) {
        Input();
        if (a == -1 && b == -1 && c == -1) {
            break;
        }
        Output();
    }

    return 0;
}