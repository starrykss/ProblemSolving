#include <iostream>
using namespace std;

#define MAX 1000001

int N, result;

int BruteForce(int N) {
    int sum, tmp, minNum;

    // 분해합 수행
    minNum = MAX;
    for (int i = 1; i <= N; i++) {
        // 각 자릿수의 합 구하기
        tmp = i;
        sum = 0;
        while (tmp > 0) {
            sum += tmp % 10;
            tmp /= 10;
        }
        if (i + sum == N) {
            if (i < minNum) {    // i : N의 생성자
                minNum = i;
            }
        }
    }

    minNum = (minNum != MAX) ? minNum : 0;

    return minNum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    result = BruteForce(N);

    cout << result << '\n';

    return 0;
}