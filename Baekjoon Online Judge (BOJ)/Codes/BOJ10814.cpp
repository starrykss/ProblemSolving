#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, age, order;
string name;
vector<pair<pair<int, string>, int>> users;    // 나이, 이름, 가입 순서

bool Compare(pair<pair<int, string>, int> a, pair<pair<int, string>, int> b) {
    if (a.first.first == b.first.first) {    // 나이가 같으면
        return a.second < b.second;    // 먼저 가입한 사람이 앞에 오는 순서로
    }

    return a.first.first < b.first.first;    // 나이가 증가하는 순서로 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> age >> name;
        users.push_back({ { age, name },  order++ });
    }

    sort(users.begin(), users.end(), Compare);

    for (auto i : users) {
        cout << i.first.first << " " << i.first.second << '\n';
    }

    return 0;
}