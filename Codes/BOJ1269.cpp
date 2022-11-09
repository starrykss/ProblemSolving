#include <iostream>
#include <unordered_map>
using namespace std;

int A, B, num, cnt;
unordered_map<int, int> um;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> A >> B;

    for (int i = 0; i < A; i++) {
        cin >> num;
        um[num]++;
    }

    for (int i = 0; i < B; i++) {
        cin >> num;
        um[num]++;
    }

    for (auto i : um) {
        if (i.second == 1) {    // 교집합이 없을 경우
            cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}