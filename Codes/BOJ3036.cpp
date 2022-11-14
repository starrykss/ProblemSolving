#include <iostream>
#include <vector>
using namespace std;

int N, r, firstR;
vector<int> radius;

int gcd(int x, int y) {
    if (x == 0) return y;
    else return gcd(y % x, x);
}

int lcm(int x, int y) {
    return x * y / gcd(x, y);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> r;
        radius.push_back(r);
    }

    firstR = radius[0];

    for (int i = 1; i < N; i++) {
        if (firstR % radius[i] == 0) {
            cout << firstR / radius[i] << "/" << 1 << '\n';
        }
        else {
            int gcdn = gcd(firstR, radius[i]);
            int lcmn = lcm(firstR, radius[i]);
            cout << lcmn / radius[i] << "/" << radius[i] / gcdn << '\n';
        }
    }

    return 0;
}