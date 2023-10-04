#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int A, B, C, timesNum, tmp, digit[10] = { 0 };

    cin >> A >> B >> C;

    timesNum = A * B * C;

    while (timesNum != 0) {
        tmp = timesNum % 10;    // extract the last digit.
        digit[tmp]++;
        timesNum /= 10;    // cut the last digit every loop.
    }

    for (int n : digit) {
        cout << n << '\n';
    }

    return 0;
}