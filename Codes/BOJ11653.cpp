#include <iostream>
using namespace std;

void factorize(int n) {
    int factor = 2;    // 시작 값

    while (factor <= n) {
        if (n % factor == 0) {
            cout << factor << '\n';
            n /= factor;
        }
        else {
            factor++;
        }
    }
}

int N;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    factorize(N);

    return 0;
}