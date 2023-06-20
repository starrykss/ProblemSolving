#include <iostream>
using namespace std;

double a, b, ratio;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a >> b;

    ratio = a - a * (b / 100);
    if (ratio >= 100) {
        cout << 0;
    }
    else {
        cout << 1;
    }
    
    return 0;
}