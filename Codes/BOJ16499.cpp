#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int N;
string words[100];
map<string, int> m;

void Input() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> words[i];
    }
}

int Solution() {
    // 오름차순 정렬
    for (int i = 0; i < N; i++) {
        sort(words[i].begin(), words[i].end());
        m[words[i]];    // 맵에 넣기
    }

    return m.size();
}

void Output() {
    cout << Solution() << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Input();
    Output();

    return 0;
}