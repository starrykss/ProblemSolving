#include <iostream>
using namespace std;

int T, H, W, N, frontRNum, backRNum;

// T : 테스트 케이스의 개수
// H : 호텔의 층 수
// W : 각 층의 방 수
// N : n 번째 손님

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> H >> W >> N;

        frontRNum = N % H;    
        backRNum = (N / H) + 1;

        // 꼭대기일 경우 처리하기
        if (N % H == 0) {
            frontRNum = H;
            backRNum--;
        }

        cout << frontRNum;
        
        cout.width(2);
        cout.fill('0');
        cout << backRNum << '\n';
    }

    return 0;
}