#include <iostream>
using namespace std;

int N, V;
int ary[101];

void Input() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> ary[i];
    }
    cin >> V;
}

int Solution(int n, int v) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (ary[i] == v) {
            count++;
        }
    }
    
    return count;
}

void Output() {
    cout << Solution(N, V) << '\n';
}

void Solve() {
    Input();
    Output();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();

    return 0;
}