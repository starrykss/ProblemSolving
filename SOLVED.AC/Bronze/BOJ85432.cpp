#include <iostream>
using namespace std;

int UR, TR, UO, TO;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> UR >> TR >> UO >> TO;
    cout << 56 * UR + 24 * TR + 14 * UO + 6 * TO << endl;

    return 0;
}