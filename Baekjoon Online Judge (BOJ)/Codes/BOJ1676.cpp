#include <iostream>
using namespace std;

int N, count;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    while (N >= 5) {
        count += N / 5;
        N /= 5;
    }

    cout << count << '\n';

    return 0;
}