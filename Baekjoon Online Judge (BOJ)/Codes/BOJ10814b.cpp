/*
 * stable_sort 를 이용하여 문제 해결하기
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, age;
string name;
vector<pair<int, string>> users;    // 나이, 이름, 가입 순서

bool Compare(pair<int, string> a, pair<int, string> b) {
    return a.first < b.first;    // 나이가 증가하는 순서로 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> age >> name;
        users.push_back({ age, name });
    }

    stable_sort(users.begin(), users.end(), Compare);    // stable_sort 사용하기 (순서 보장)

    for (auto i : users) {
        cout << i.first << " " << i.second << '\n';
    }

    return 0;
}