#include <iostream>
using namespace std;

#define N 9

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int ary[N], max, index;

    for (int i = 0; i < N; i++) {
        cin >> ary[i];
    }

    max = ary[0];

    for (int i = 0; i < N; i++) {
        if (max <= ary[i]) {
            max = ary[i];
            index = i + 1;
        }
    }

    cout << max << '\n' << index << '\n';

    return 0;
}