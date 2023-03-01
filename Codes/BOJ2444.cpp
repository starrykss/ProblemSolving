#include <iostream>
using namespace std;

int N;

void Input() {
    cin >> N;
}

void Solution(int n) {
    int a, b, c, d;
    for (int row = 1; row <= (2 * n) - 1; row++) {
        // up
        if (row <= n) {
            for (a = 1; a <= n - row; a++) cout << ' ';
            for (b = 1; b <= (n * 2) - (a * 2) + 1; b++) cout << '*';
            cout << '\n';
        }
        else {
            for (c = 1; c <= row - n; c++) cout << ' ';
            for (d = 1; d <= (n * 2) - (c * 2) + 1; d++) cout << '*';
            cout << '\n';
        }
        
    }
}

void Output() {
    Solution(N);
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