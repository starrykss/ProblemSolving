/*
 * 튜플(TUPLE)을 이용하여 문제 해결하기
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;

int N, age, order;
string name;
vector<tuple<int, string, int>> users;    // 나이, 이름, 가입 순서

bool Compare(tuple<int, string, int> a, tuple<int, string, int> b) {
    if (get<0>(a) == get<0>(b)) {    // 나이가 같으면
        return get<2>(a) < get<2>(b);    // 먼저 가입한 사람이 앞에 오는 순서로
    }

    return get<0>(a) < get<0>(a);    // 나이가 증가하는 순서로 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    users.resize(N);    // tuple을 사용할 경우, resize 작업을 필수로 해줘야 한다.

    for (int i = 0; i < N; ++i) {
        cin >> get<0>(users[i]) >> get<1>(users[i]);
        get<2>(users[i]) = order++;
    }

    sort(users.begin(), users.end(), Compare);

    for (auto i : users) {
        cout << get<0>(i) << " " << get<1>(i) << '\n';
    }

    return 0;
}