#include <iostream>
using namespace std;

long long N, M, res;    // int가 아닌 long long 자료형으로 선언한다.

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    // (1) abs() 함수 없이 구하기
    if (N <= M) {
        if (M < 0) {
            N *= -1;
            M *= -1;
            res = N - M;
        }
        else {    // M >= 0
            res = M - N;
        }
    }
    else {    // N > M
        if (N < 0) {
            N *= -1;
            M *= -1;
            res = M - N;
        }
        else {    // N >= 0
            res = N - M;
        }
    }

    // (2) abs() 함수로 구하기
    // res = abs(n - m);
    
    cout << res;

    return 0;
}