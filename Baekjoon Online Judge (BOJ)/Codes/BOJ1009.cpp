#include <iostream>
using namespace std;

int T, a, b;

int Core(int a, int b) {
    int value;

    value = 1;
    for (int i = 0; i < b; i++) {
        value = (value * a) % 10;
    }
    if (value == 0) {    // 나머지가 0일 경우
        value = 10;
    }

    return value;
}

void Input() {
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> a >> b;
        cout << Core(a, b) << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Input();

    return 0;
}