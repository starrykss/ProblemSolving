#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, x, y;
vector<int> X, Y;

void Input() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x >> y;

        X.push_back(x);
        Y.push_back(y);
    }
}

int Solution(int xPos, int yPos) {
    int minX, maxX, minY, maxY, result;

    // 오름차순 정렬
    sort(X.begin(), X.end());
    sort(Y.begin(), Y.end());

    minX = X[0];
    maxX = X[N - 1];
    minY = Y[0];
    maxY = Y[N - 1];

    result = (maxX - minX) * (maxY - minY);

    return result;
}

void Output() {
    cout << Solution(x, y) << '\n';
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