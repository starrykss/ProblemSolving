#include <iostream>
using namespace std;

int N, num, cnt[10001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> num;
        cnt[num]++;
    }

    for (int i = 0; i < 10001; i++) {
        for (int j = 0; j < cnt[i]; j++) {
            cout << i << '\n';
        }
    }
    
    return 0;
}