#include <iostream>
#include <map>
#include <vector>
using namespace std;

int N, M, cnt;
string name;
map<string, int> m;
vector<string> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> name;
        m[name]++;
    }

    for (int i = 0; i < M; i++) {
        cin >> name;
        m[name]++;
    }

    for (auto i : m) {
        if (i.second != 1) {
            cnt++;
            v.push_back(i.first);
        }
    }

    cout << cnt << '\n';
    for (auto i : v) {
        cout << i << '\n';
    }

    return 0;
}