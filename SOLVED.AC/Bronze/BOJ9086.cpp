#include <iostream>
#include <cstring>
using namespace std;

int T;
char ary[1001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> ary;
        cout << ary[0] << ary[strlen(ary) - 1] << '\n';
    }

    return 0;
}