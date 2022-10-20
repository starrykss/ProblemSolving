#include <iostream>
using namespace std;

int N, S;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (cin >> N >> S) {
        cout << S / (N + 1) << '\n';
    }

    return 0;
}