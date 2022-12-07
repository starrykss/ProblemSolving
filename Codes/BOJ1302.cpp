#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int N;
string title;
map<string, int> books;
vector<pair<string, int>> counts;

void Input() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> title;
        books[title]++;
    }
}

bool Compare(pair<string, int> a, pair<string ,int> b) {
    if (a.second == b.second) {    // 빈도수가 같으면 
        return a.first < b.first;    // 책 이름을 사전순(오름차순)으로 정렬
    }
    return a.second > b.second;    // 빈도수로 내림차순 정렬
}

string findMax(map<string, int> m) {
    for (auto i : m) {
        counts.push_back({ i.first, i.second });
    }
    sort(counts.begin(), counts.end(), Compare);    // 오름차순 정렬
    
    return counts[0].first;
}

void Output() {
    cout << findMax(books) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Input();
    Output();

    return 0;
}