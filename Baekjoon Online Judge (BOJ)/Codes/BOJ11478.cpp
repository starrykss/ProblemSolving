#include <iostream>
#include <unordered_map>
using namespace std;

string S, tmp;
unordered_map<string, int> um;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> S;

    for (int i = 0; i < S.size(); i++) {
        for (int j = 0; j < S.size(); j++) {
            tmp = S.substr(i, j + 1);
            um[tmp]++;
        }
    }

    cout << um.size() << '\n';

    return 0;
}