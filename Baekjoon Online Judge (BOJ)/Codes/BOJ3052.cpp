#include <iostream>
using namespace std;

#define N 10
#define R 42

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int ary[N], remainder[R] = { 0 }, count = 0;

    for (int i = 0; i < N; i++) {
        cin >> ary[i];
        remainder[ary[i] % R]++;
    }

    for (int i : remainder) {
        if (i != 0) {
            count++;
        }
    }

    cout << count << '\n';

    return 0;
}