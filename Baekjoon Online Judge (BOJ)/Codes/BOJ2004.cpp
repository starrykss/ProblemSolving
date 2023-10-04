#include <iostream>
using namespace std;

using ull = unsigned long long;
ull n, m, numTwo, numFive, result;

// div의 지수의 개수 찾기
ull findNumOfDivisors(int div, ull n) { 
    int count = 0;

    while (n >= div) {
        count += n / div;
        n /= div;
    }
    
    return count;
}

ull findNumOfDivisors2(int div, ull n) {
    int count = 0;

    for (ull i = div; i <= n; i *= div) {
        count += (n / i);
    }

    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    // nCm = n! / m! x (n - m)!
    numTwo = findNumOfDivisors(2, n) - (findNumOfDivisors(2, m) + findNumOfDivisors(2, n - m));    // 2의 지수의 개수 계산
    numFive = findNumOfDivisors(5, n) - (findNumOfDivisors(5, m) + findNumOfDivisors(5, n - m));    // 5의 지수의 개수 계산

    // 조합은 나누기 연산을 해야한다, 2 * 5 = 10이기 때문에 둘 중에 작은 것을 출력시킨다.
    result = (numTwo > numFive) ? numFive : numTwo;    
    
    cout << result << '\n';

    return 0;
}