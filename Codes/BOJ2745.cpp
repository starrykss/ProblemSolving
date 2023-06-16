#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string N;
int B;

void Input() {
    cin >> N >> B;
}

int Solution(string n, int b) {
    int len = n.length();
    int sum = 0;

    for (int i = 0; i < len; i++) {
        // 해당 문자가 숫자일 경우 숫자를, 문자(A-Z)일 경우 10에서 35 사이의 숫자를 반환한다.
        int tmp = ('0' <= n[i] && n[i] <= '9') ? n[i] - '0' : n[i] - 55;

        sum += tmp * pow(b, len - (i + 1));
    }

    return sum;
}

void Output() {
    cout << Solution(N, B) << '\n';
}

void Solve() {
    Input();
    Output();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();

    return 0;
}