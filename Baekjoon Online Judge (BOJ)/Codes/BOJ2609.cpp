#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

int num1, num2;

pair<int, int> findAnswer(int n1, int n2) {
    int maxN, gcd, lcm;
    pair<int, int> ans;

    maxN = max(n1, n2);    // 최댓값 찾기
    
    // 최대 공약수(GCD) 찾기
    for (int i = 1; i <= maxN; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }

    // 최소 공배수(LCM) 찾기
    for (int i = 1; i <= n1 * n2; i++) {
        if (i % n1 == 0 && i % n2 == 0) {
            lcm = i;
            break;
        }
    }

    ans = make_pair(gcd, lcm);
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> num1 >> num2;

    cout << findAnswer(num1, num2).first << '\n' << findAnswer(num1, num2).second << '\n';

    return 0;
}