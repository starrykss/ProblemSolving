#include <iostream>
using namespace std;

int N, M, a, b;
int nums[100001];
int pSums[100001];

void Solve() {
    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        cin >> nums[i];
        pSums[i] = pSums[i - 1] + nums[i];
    }

    for (int i = 1; i <= M; i++) {
        cin >> a >> b;
        cout << pSums[b] - pSums[a - 1] << '\n';
    }    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();

    return 0;
}