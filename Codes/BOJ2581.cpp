#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int M, N, sum, minNum, cnt, prime;
vector<int> primeNums;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> M;
    cin >> N;

    sum = 0;
    cnt = 0;
    for (int i = M; i <= N; i++) {
        prime = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                prime++;
            }
        }
        if (prime == 2) {
            cnt++;
            sum += i;
            primeNums.push_back(i);
        }
    }

    if (cnt) {
        sort(primeNums.begin(), primeNums.end());
        minNum = primeNums[0];
        cout << sum << '\n' << minNum << '\n';
    }
    else {
        cout << "-1" << '\n';
    }

    return 0;
}