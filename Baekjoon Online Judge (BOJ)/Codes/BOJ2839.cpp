#include <iostream>
using namespace std;

int N, cnt;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    while (N >= 0) {
        if (N % 5 == 0) {    // 5로 한번에 나누어 떨어질 경우
            cnt += N / 5;
            cout << cnt << '\n';
            return 0;
        }
        // 5로 한번에 나누어 떨어지지 않을 경우, 
        // 5로 나눠질 때까지 전체 설탕의 무게를 3씩 줄여나간다. (동시에 봉지의 크기를 1개씩 늘린다.)
        N -= 3;
        cnt++;
    }

    cout << "-1" << '\n';

    return 0;
}