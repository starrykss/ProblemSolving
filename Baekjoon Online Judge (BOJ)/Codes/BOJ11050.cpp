#include <iostream>
using namespace std;

int N, K;

int nCk(int n, int k) {
    if (k > n) {
        return 0;
    }
    if (k == 0 || k == n) {
        return 1;
    }
    return nCk(n - 1, k - 1) + nCk(n - 1, k);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);

    cin >> N >> K;

    cout << nCk(N, K) << '\n';

    return 0;
}