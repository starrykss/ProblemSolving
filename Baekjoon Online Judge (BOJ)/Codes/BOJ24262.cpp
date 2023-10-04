#include <iostream>
using namespace std;

int n;

void Input() {
    cin >> n;
}

// MenOfPassion
void Solution(int n) {
    // O(1) -> 최고 차항의 차수가 0이므로 0을 출력한다.
    cout << 1 << '\n' << 0 << '\n';
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