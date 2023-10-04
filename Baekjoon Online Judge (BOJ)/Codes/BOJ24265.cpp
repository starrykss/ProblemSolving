#include <iostream>
using namespace std;

// 입력값 범위 : 0 <= n <= 500,000 
// -> int의 최대 범위(약 21억)를 초과하므로 long long 형으로 선언한다.
using ULLI = unsigned long long int;

ULLI n;

void Input() {
    cin >> n;
}

// MenOfPassion
void Solution(ULLI n) {
    // O(n(n-1)/2) -> 최고 차항(n)의 차수가 2이므로 2를 출력한다.
    cout << n * (n - 1) / 2 << '\n' << 2 << '\n';
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