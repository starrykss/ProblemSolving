#include <iostream>
using namespace std;

string S;
int i;

void Input() {
    cin >> S >> i;
}

char Solution(string input, int index) {
    return input[index - 1];
}

void Output() {
    cout << Solution(S, i) << '\n';
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