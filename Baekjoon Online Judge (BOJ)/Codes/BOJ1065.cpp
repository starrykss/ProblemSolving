#include <iostream>
using namespace std;

bool isHansu(int n);

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, count;

    cin >> N;

    count = 0;
    for (int i = 1; i <= N; i++) {
        if (isHansu(i)) {
            count++;
        }
    }

    cout << count << '\n';

    return 0;
}

bool isHansu(int n) {
    int num, firstDigit, secondDigit, thirdDigit;

    if (n < 100) {    // if the number is 1 or 2 digits
        return true;    // there is no arithmetic sequence, so let every number be true.
    }
    else {    // if the number is 3 digits
        firstDigit = n / 100;
        secondDigit = (n / 10) % 10;
        thirdDigit = n % 10;

        if ((secondDigit - firstDigit) == (thirdDigit - secondDigit)) {    // ABC, (B - A) == (C - B)
            return true;
        }
        else {
            return false;
        }
    }
}