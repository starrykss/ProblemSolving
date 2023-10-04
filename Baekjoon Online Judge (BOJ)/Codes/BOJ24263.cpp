#include <iostream>
using namespace std;

int n;

void Input() {
    cin >> n;
}

// MenOfPassion
void Solution(int n) {
    // O(n) -> 최고 차항(n)의 차수가 1이므로 1을 출력한다.
    cout << n << '\n' << 1 << '\n';
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