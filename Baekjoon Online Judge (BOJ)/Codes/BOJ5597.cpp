#include <iostream>
using namespace std;

int n;
bool account[31];

void Input() {
    for (int i = 1; i <= 28; i++) {
        cin >> n;
        account[n] = true;
    }
}

void Solution() {
    for (int i = 1; i <= 30; i++) {
        if (account[i] != true) {
            cout << i << '\n';
        }
    }
}

void Solve() {
    Input();
    Solution();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();

    return 0;
}