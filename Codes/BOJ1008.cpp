#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    // Fix Precision
    cout << fixed;
    cout.precision(32);

    double a, b;    // or long double

    cin >> a >> b;
    cout << a / b << endl;

    return 0;
}