#include <iostream>
using namespace std;

char input[4];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 3; i++) {
        cin >> input[i];
    }

    for (int i = 2; i >= 0; i--) {
        cout << input[i];
    }
    
    return 0;
}