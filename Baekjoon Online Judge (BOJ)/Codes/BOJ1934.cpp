#include <iostream>
using namespace std;

int gcd(int x, int y) {
    if (x == 0) return y;
    else return gcd(y % x, x);
}

int lcm(int x, int y) {
    return (x * y) / gcd(x, y);
}

int T, A, B;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;
    
    for (int i = 0; i < T; i++) {
        cin >> A >> B;
        cout << lcm(A, B) << '\n';
    }


    return 0;
}