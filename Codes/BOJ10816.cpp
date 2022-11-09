#include <iostream>
#include <unordered_map>
using namespace std;

int N, M, num;
unordered_map<int, int> m;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> num;
        m[num]++;
    }

    cin >> M;
    
    for (int i = 0; i < M; i++) {
        cin >> num;
        cout << m[num] << " ";
    }

    return 0;
}