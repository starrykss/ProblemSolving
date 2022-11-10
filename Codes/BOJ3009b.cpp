#include <iostream>
using namespace std;

int a, b, x, y, X[1001], Y[1001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 3; i++) {
        cin >> a >> b;
        X[a]++;
        Y[b]++;
    }

    for (int i = 0; i < 1001; i++) {
        if (X[i] == 1) {
            x = i;
        }
        if (Y[i] == 1) {
            y = i;
        }
    }

    cout << x << " " << y << '\n';

    return 0;
}