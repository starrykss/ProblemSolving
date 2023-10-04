#include <iostream>
#include <vector>
using namespace std;

#define DIV 15746

int N;
vector<int> dp;

void Input() {
    cin >> N;
    dp.resize(N + 1);
}

// f(n) = f(n - 1) + f(n - 2)
int Calc(int n) {
    dp[1] = 1 % DIV;
    dp[2] = 2 % DIV;

    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % DIV;
    }

    return dp[n];
}

void Output() {
    cout << Calc(N) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Input();
    Output();

    return 0;
}