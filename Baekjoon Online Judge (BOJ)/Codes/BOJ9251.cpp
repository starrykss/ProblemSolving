#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string A, B;
int dp[1001][1001];

void Input() {
    cin >> A >> B;
}

int Solution(string a, string b) {
    int lenA, lenB;
    
    lenA = a.size();
    lenB = b.size();

    for (int i = 1; i <= lenA; i++) {
        for (int j = 1; j <= lenB; j++) {
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[lenA][lenB];
}

void Output() {
    cout << Solution(A, B) << '\n';
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