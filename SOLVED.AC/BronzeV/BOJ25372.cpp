#include <iostream>
#include <string>
using namespace std;

int N;
string A;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A;
        if (A.length() >= 6 && A.length() <= 9) {
            cout << "yes" << '\n';
        }
        else {
            cout << "no" << '\n';
        }
    }
    
    return 0;
}