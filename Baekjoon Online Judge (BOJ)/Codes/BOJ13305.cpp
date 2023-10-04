#include <iostream>
#include <vector>
using namespace std;

using ull = unsigned long long;

int N, length, price, totalLength;
vector<int> lengths;
vector<ull> pricePerL;

void Input() {
    cin >> N;
    
    for (int i = 0; i < N - 1; i++) {
        cin >> length;
        lengths.push_back(length);
        totalLength += length;    // 전체 거리 업데이트
    }

    for (int i = 0; i < N; i++) {
        cin >> price;
        pricePerL.push_back(price);
    }
}

int Solution() {
    
}

void Output() {
    cout << Solution() << '\n';
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