#include <iostream>
#include <map>

using namespace std;

int a, b, x, y;
map<int, int> X, Y;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 3; i++) {
        cin >> a >> b;
        X[a]++;
        Y[b]++;
    }

    for (auto i : X) {
        if (i.second == 1) {
            x = i.first;
        }
    }
    for (auto i : Y) {
        if (i.second == 1) {
            y = i.first;
        }
    }

    cout << x << " " << y << '\n';

    return 0;
}