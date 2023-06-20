#include <iostream>
using namespace std;

double A, B;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Fix Precision
    cout << fixed;
    cout.precision(32);

    cin >> A >> B;
    cout << A / B;

    return 0;
}