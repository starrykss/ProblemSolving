#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

long long N, cardNo;
map<long long, int> cards;
vector<pair<long long, int>> counts;

void Input() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> cardNo;
        cards[cardNo]++;
    }
}

bool Compare(pair<long long, int> a, pair<long long, int> b) {
    if (a.second == b.second) {
        return a.first < b.first;    // 카드 빈도수가 같으면 카드 숫자를 오름차순으로 정렬
    }
    return a.second > b.second;    // 카드 빈도수를 내림차순으로 정렬
}

long long findMax(map<long long, int> m) {
    for (auto i : m) {
        counts.push_back({ i.first, i.second });
    }
    sort(counts.begin(), counts.end(), Compare);

    return counts[0].first;
}

void Output() {
    cout << findMax(cards) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Input();
    Output();

    return 0;
}