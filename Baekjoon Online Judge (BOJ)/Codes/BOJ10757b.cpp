#include <iostream>
using namespace std;

string A, B;

void Input() {
    cin >> A >> B;
}

string Solution(string a, string b) {
    // a : 긴 자리의 수, b : 짧은 자리의 수
    if (a.size() < b.size()) {
        swap(a, b);
    }

    for (int lenB = b.size() - 1, lenA = a.size() - 1; lenB >= 0; lenB--, lenA--) {
        a[lenA] += (b[lenB] - '0');
    }

    for (int lenA = a.size() - 1; lenA > 0; lenA--) {
        if (a[lenA] > '9') {
            int carry = a[lenA] - '0';
            a[lenA - 1] = ((a[lenA - 1] - '0') + carry / 10) + '0';    // 올림수 계산
            a[lenA] = (carry % 10) + '0';
        }
    }

    // 첫 번째 자리의 수가 10 이상이 될 경우
    if (a[0] > '9') {
        string k;

        k = a[0];
        a[0] = ((a[0] - '0') % 10) + '0';
        k[0] = ((k[0] - '0') / 10) + '0';
        a = k + a;
    }

    return a;
}

void Output() {
    cout << Solution(A, B) << '\n';
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