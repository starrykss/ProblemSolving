#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << i << '\n';    // use '\n' instead of endl.
    }

    return 0;
}