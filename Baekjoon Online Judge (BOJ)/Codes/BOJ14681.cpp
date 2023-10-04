#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int x, y;

    cin >> x >> y;

    // Quadrant n : 제 n사분면
    // x > 0, y > 0 : Q1
    // x < 0, y > 0 : Q2
    // x < 0, y < 0 : Q3
    // x > 0, y < 0 : Q4

    if ((x > 0) && (y > 0)) {
        cout << "1" << endl;
    }
    else if ((x < 0) && (y > 0)) {
        cout << "2" << endl;
    }
    else if ((x < 0) && (y < 0)) {
        cout << "3" << endl;
    }
    else {
        cout << "4" << endl;
    }

    return 0;
}