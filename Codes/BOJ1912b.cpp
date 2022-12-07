#include <iostream>
#include <vector>
using namespace std;

int n, num, result;
vector<int> seq, dp; 

void Input() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        seq.push_back(num);
    }
    dp.resize(n);
}

int Calc(int n) {
    dp[0] = seq[0];
    for (int i = 1; i < n; i++) {
        if (dp[i - 1] > 0) {
            dp[i] = dp[i - 1] + seq[i];
        }
        else {
            dp[i] = seq[i];
        }
    }

    result = dp[0];
    for (auto i : dp) {
        if (result < i) {
            result = i;
        }
    }

    return result;
}

void Output() {
    cout << Calc(n) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Input();
    Output();

    return 0;
}