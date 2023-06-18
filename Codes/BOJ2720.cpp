#include <iostream>
using namespace std;

int T, C;
int quarter, dime, nickel, penny;

void Solve() {
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> C;

        if (C / 25) {
            quarter = C / 25;
            C %= 25;
        }

        if (C / 10) {
            dime = C / 10;
            C %= 10;
        }

        if (C / 5) {
            nickel = C / 5;
            C %= 5;
        }

        if (C / 1) {
            penny = C / 1;
            C %= 1;
        }

        cout << quarter << " " << dime << " " << nickel << " " << penny << '\n';
        quarter = dime = nickel = penny = 0;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();

    return 0;
}