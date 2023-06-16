#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int N, B;
string S;

void Input() {
    cin >> N >> B;
}

string Solution(int n, int b) {
    int mod;
    char elem;

    while (n != 0) {
        mod = n % b;

        if (mod > 9) {    // 나머지가 10 이상이면
            elem = mod + 55;    // A ~ Z에 해당하는 문자로 변환한다. (아스키 코드)
        }
        else {    // 나머지가 1 이상 9 이하이면
            elem = mod + 48;     // 0 - 9에 해당하는 숫자로 변환한다. (아스키 코드)
        }

        S.push_back(elem);

        n /= b;
    }

    // 요소 위치 뒤집기
    reverse(S.begin(), S.end());

    return S;
}

void Output() {
    cout << Solution(N, B) << '\n';
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