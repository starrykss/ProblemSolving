#include <iostream>
using namespace std;

int N;
long long sum;

void Input() {
    cin >> N;
}

long long Solution(int n) {
    for (int i = 1; i <= n; i++) {
        sum += (n / i) * i;
    }
    return sum;
}

void Output() {
    cout << Solution(N) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Input();
    Output();

    return 0;
}