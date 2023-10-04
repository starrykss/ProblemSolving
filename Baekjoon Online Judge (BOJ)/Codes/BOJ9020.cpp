#include <iostream>
#include <cmath>
using namespace std;

int T, n, k, sieve[10001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;

    // 에라토스테네스의 체 알고리즘으로 2부터 10,000까지 소수 구해놓기
    sieve[0] = sieve[1] = 0;
    for (int i = 2; i <= 10000; i++) {
        sieve[i] = i;
    }

    k = sqrt(10000);
    for (int i = 2; i <= k; i++) {
        if (sieve[i] == 0) continue;
        for (int j = i * 2; j <= 10000; j += i) {
            if (sieve[j] == 0) continue;
            else sieve[j] = 0;
        }
    }

    for (int i = 0; i < T; i++) {
        cin >> n;

        // 두 소수의 차이가 가장 작게 나타나도록 n의 절반 값부터 조사를 시작한다.
        for (int i = n / 2; i > 0; i--) {
            if (sieve[i] != 0 && sieve[n - i] != 0) {
                cout << i << " " << n - i << '\n';
                break;    // 두 소수의 차이가 가장 작게 나타나는 경우 1가지만 출력
            }
        }
    }

    return 0;
}