#include <iostream>
#include <cmath>
using namespace std;

using ULLI = unsigned long long int;

ULLI n;

void Input() {
    cin >> n;
}

// MenOfPassion
void Solution(ULLI n) {
    // O(n^{2}) -> 최고 차항(n)의 차수가 2이므로 2를 출력한다.
    cout << n * n << '\n' << 2 << '\n';
}

void Output() {
    Solution(n);
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