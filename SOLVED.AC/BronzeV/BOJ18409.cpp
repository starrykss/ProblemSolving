#include <iostream>
using namespace std;

int N, cnt;
string S;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    cin >> S;

    for (int i = 0; i < S.size(); i++) {
        if (S[i] == 'a' || S[i] == 'i' || S[i] == 'u' || S[i] == 'e' || S[i] == 'o') {
            cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}