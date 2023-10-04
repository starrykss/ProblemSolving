#include <iostream>
#include <vector>
using namespace std;

int n;

void Solution(int n) {
    int sum;
    vector<int> divisors;

    sum = 0;
    for (int num = 1; num < n; num++) {
        if (n % num == 0) {
            divisors.push_back(num);
            sum += num;
        }
    }

    if (sum == n) {
        cout << n << " = 1";
        for (int i = 1; i < divisors.size(); i++) {
            cout << " + " << divisors[i];
        }
        cout << '\n';
    }
    else {
        cout << n << " is NOT perfect." << '\n';
    }
}

void Solve() {
    while (true) {
        cin >> n;

        if (n == -1) {
            break;
        }
        Solution(n);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();

    return 0;
}