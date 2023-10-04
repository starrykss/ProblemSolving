#include <iostream>
#include <cmath>
using namespace std;

int N;

void Input() {
    cin >> N;
}

int Solution(int n) {
    return ceil(pow(1 + ceil(pow(2, n)), 2));
}

void Output() {
    cout << Solution(N) << '\n';
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