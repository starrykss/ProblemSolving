#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T, A, B;    // maximum of T : 1,000,000 -> int, long (o), short (x)
    
    cin >> T;
    cin.ignore();    // clear input buffer

    for (int i = 0; i < T; i++) {
        cin >> A >> B;
        cout << A + B << '\n';    // use '\n' instead of 'endl' to make the speed faster.
    }

    return 0;
}