#include <iostream>
using namespace std;

string S;
char alpha;
int q, l, r;
int pSums[27][200001];

void Solve() {
    cin >> S >> q;

    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < S.size(); j++) {
            if (S[j] == (char)(i + 97)) {
                pSums[i][j]++;
            }
            pSums[i][j] += pSums[i][j - 1];    // 누적 합 수행
        }
    }
    
    for (int i = 0; i < q; i++) {
        cin >> alpha >> l >> r;
        
        int answer;
        
        if (l == 0) {
            answer = pSums[alpha - 'a'][r];
        }
        else {
            answer = pSums[alpha - 'a'][r] - pSums[alpha - 'a'][l - 1];
        }
        cout << answer << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();

    return 0;
}