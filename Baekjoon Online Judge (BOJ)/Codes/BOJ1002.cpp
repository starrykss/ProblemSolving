#include <iostream>
#include <cmath>
using namespace std;

int T, X1, Y1, X2, Y2, R1, R2;
double D;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> X1 >> Y1 >> R1 >> X2 >> Y2 >> R2;

        D = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));

        if (D == 0 && R1 == R2) {     // (1) 두 원이 완전히 겹치는 경우 (동심원)
            cout << -1 << '\n';
        }
        else if (D == R1 + R2 || D == abs(R1 - R2)) {    // (2) 두 원의 접점이 1개인 경우 (외접, 내접)
            cout << 1 << '\n';
        }
        else if (abs(R1 - R2) < D && D < R1 + R2) {    // (3) 두 원의 접점이 2개인 경우
            cout << 2 << '\n';
        }
        else {    // (4) 두 원의 접점이 없는 경우
            cout << 0 << '\n';
        }
    }

    return 0;
}