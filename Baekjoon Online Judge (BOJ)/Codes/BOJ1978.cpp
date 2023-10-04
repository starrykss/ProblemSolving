#include <iostream>
using namespace std;

int N, num, prime, cnt;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    cnt = 0;
    for (int i = 0; i < N; i++) {
        cin >> num;

        prime = 0;
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                prime++;
            }
        }
        if (prime == 2) {
            cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}