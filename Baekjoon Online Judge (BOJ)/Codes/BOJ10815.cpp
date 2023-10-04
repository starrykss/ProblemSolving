#include <iostream>
#include <unordered_set>
using namespace std;

int N, M, num;
unordered_set<int> usN;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> num;
        usN.insert(num);
    }

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> num;
        if (usN.find(num) == usN.end()) {    // 값을 찾지 못했을 경우
            cout << 0 << " ";
        }
        else {
            cout << 1 << " ";
        }
    }

    return 0;
}