#include <iostream>
using namespace std;

int X, N, totalSum, order, up, down;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> X;
    
    N = 0;
    while (totalSum < X) {
        N++;
        totalSum += N;
    }

    order = totalSum - X;    // 대각선 라인 안에서 몇 번째 숫자인지 

    if (N % 2 == 1) {    // 홀수 라인인 경우
        up = 1 + order;    // 분자는 1부터 시작한다.
        down = N - order;    // 분모는 N부터 시작한다.
    }
    else {    // 짝수 라인인 경우
        up = N - order;    // 분자는 N에서 시작한다.
        down = 1 + order;    // 분모는 1부터 시작한다.
    }

    cout << up << '/' << down << '\n';

    return 0;
}