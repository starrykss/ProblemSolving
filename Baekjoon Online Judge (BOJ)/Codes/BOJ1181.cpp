#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
string word;
vector<string> words;    

bool Compare(string a, string b) {
    if (a.size() == b.size()) {    // 길이가 같으면
        return a < b;    // 사전 순으로
    }
    return a.size() < b.size();    // 길이가 짧은 것 부터
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> word;
        words.push_back(word);
    }

    sort(words.begin(), words.end(), Compare);

    // 벡터 내의 중복된 단어 제거
    for (int i = 0; i < words.size(); i++) {
        for (int j = i + 1; j < words.size(); j++) {
            if (words[i] == words[j]) {    // 중복되는 단어가 있는 경우
                words[j] = " ";    // 두 번째 중복된 단어를 공백(" ")으로 바꾼다.
            }
        }
    }

    for (auto i : words) {
        if (i != " ") {    // 공백이 아닌 문자만 출력
            cout << i << '\n';
        }
    }

    return 0;
}