#include <iostream>
#include <string>
using namespace std;

string word;
bool isSame;

void Input() {
    cin >> word;
}

int Solution(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != s[s.size() - 1 - i]) {
            return false;
        }
    }
    return true;
}

void Output() {
    cout << Solution(word) << '\n';
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