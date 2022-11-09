#include <iostream>
#include <set>
using namespace std;

int N, M, cnt;
string str;
set<string> s;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> str;
        s.insert(str);
    }

    for (int i = 0; i < M; i++) {
        cin >> str;
        if (s.find(str) != s.end()) {    // 찾았을 경우
            cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}