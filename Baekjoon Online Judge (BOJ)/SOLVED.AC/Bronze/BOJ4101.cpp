#include <iostream>
using namespace std;

unsigned int A, B;    // unsinged int, unsigned long long 모두 맞다!

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (cin >> A >> B) {
        if ((A == 0) && (B == 0)) {
            break;
        }
        if (A > B) cout << "Yes" << '\n';
        else cout << "No" << '\n';
    }

    return 0;
}