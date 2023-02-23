#include <iostream>
#include <string>
using namespace std;

string S;

void Solve() {
    while (getline(cin, S)) {
        cout << S << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();

    return 0;
}