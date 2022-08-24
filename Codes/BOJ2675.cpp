#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string S;
    int T, R;

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> R;
        cin.ignore();
        
        getline(cin, S);

        for (int i = 0; i < S.length(); i++) {
            for (int j = 0; j < R; j++) {
                cout << S[i];
            }
        }
        cout << '\n';
    }

    return 0;
}