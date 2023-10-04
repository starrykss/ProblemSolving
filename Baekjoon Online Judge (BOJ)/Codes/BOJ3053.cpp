#include <iostream>
#include <cmath>
using namespace std;

#define _USE_MATH_DEFINES    // 수학 관련 상수 사용 가능

double R;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> R;

    cout << fixed;
    cout.precision(6);

    cout << M_PI * R * R << '\n' << R * R * 2 << '\n';

    return 0;
}