#include <iostream>
#include <cmath>
using namespace std;

int T, X1, Y1, X2, Y2, n, CX, CY, R, in, out;
double D1, D2;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> X1 >> Y1 >> X2 >> Y2;
        
        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> CX >> CY >> R;

            D1 = sqrt(pow(CX - X1, 2) + pow(CY - Y1, 2));    // 행생계의 중심부터 출발점까지의 거리
            D2 = sqrt(pow(CX - X2, 2) + pow(CY - Y2, 2));    // 행성계의 중심부터 도착점까지의 거리
            
            if (D1 < R && D2 > R) {    // 출발점이 행성계 안에 있고, 도착점이 행성계 밖에 있는 경우
                out++;
            }
            if (D2 < R && D1 > R) {    // 도착점이 행성계 안에 있고, 출발점이 행성계 밖에 있는 경우
                in++;
            }
        }
        cout << in + out << '\n';
        in = out = 0;    // 변수 초기화
    }

    return 0;
}