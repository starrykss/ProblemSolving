#include <iostream>
using namespace std;

int A, B, V, day, dist;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> A >> B >> V;

    // 나무 높이 : V
    // 낮 : +A 미터
    // 밤 : -B 미터
    // 정상에서는 거리 변화 X
    dist = A - B;
    day = (V - A) / dist;

    if ((V - A) % dist != 0) {
        day++;
    }

    cout << day + 1 << '\n';

    return 0;
}