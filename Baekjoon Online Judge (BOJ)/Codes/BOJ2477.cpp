#include <iostream>
#include <vector>
using namespace std;

int K, direction, dist, maxX, maxY, orderX, orderY, squareW, squareM, square; 
vector<pair<int, int>> dists;    // (들어간 순서, 거리)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> K;

    // ㄱ 자 모양 : 가로 변 : 3개, 세로 변 : 3개
    for (int i = 0; i < 6; i++) {
        cin >> direction >> dist;

        dists.push_back({ i, dist });

        if (direction == 1 || direction == 2) {    // 1(E), 2(W)
            if (maxX < dist) {
                maxX = dist;
                orderX = i;
            }
        }
        else {    // 3(S), 4(N)
            if (maxY < dist) {
                maxY = dist;
                orderY = i;
            }
        }
    }

    squareW = maxX * maxY;    // 전체 사각형의 넓이
    squareM = dists[(orderX + 3) % 6].second * dists[(orderY + 3) % 6].second;    // 비어 있는 사각형의 넓이

    square = squareW - squareM;

    cout << square * K << '\n';

    return 0;
}