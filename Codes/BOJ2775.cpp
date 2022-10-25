#include <iostream>
using namespace std;

int T, k, n, apt[15][15], sum;

// ...
// [1][3][6][10]...[1 + 2 + 3 + ... + 14]
// [1][2][3][4][5][6][7][8][9][10][11][12][13][14]

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 15; i++) {
        apt[0][i] = i + 1;
    }

    for (int i = 1; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            sum = 0;
            for (int k = 0; k <= j; k++) {
                sum += apt[i - 1][k];
            }
            apt[i][j] = sum;
        }
    }

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> k;
        cin >> n;

        cout << apt[k][n - 1] << '\n';
    }

    return 0;
}