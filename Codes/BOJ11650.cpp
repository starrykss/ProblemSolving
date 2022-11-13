#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, x, y;
vector<pair<int, int>> xy;

bool compare(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) {    // x 좌표가 같으면
        return a.second < b.second;    // y 좌표를 오름차순으로 정렬
    }
    return a.first < b.first;    // x 좌표를 오름차순으로 정렬
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        xy.push_back({x, y});
    }

    sort(xy.begin(), xy.end(), compare);

    for (auto i : xy) {
        cout << i.first << " " << i.second << '\n';
    }

    return 0;
}