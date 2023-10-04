#include <iostream>
using namespace std;

int N, ary[101], v, cnt = 0;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> ary[i];
    }

    cin >> v;

    for (int i = 0; i < N; i++) {
        if (ary[i] == v) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}