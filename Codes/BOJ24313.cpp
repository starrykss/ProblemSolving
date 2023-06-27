#include <iostream>
using namespace std;

int a1, a0, c, n0;

void Input() {
    cin >> a1 >> a0 >> c >> n0;
}

bool Solution(int a1, int a0, int c, int n0) {
    if (a1 * n0 + a0 <= c * n0) {
        if (a1 <= c) {
            return true;
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}

void Output() {
    cout << Solution(a1, a0, c, n0) << '\n';
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