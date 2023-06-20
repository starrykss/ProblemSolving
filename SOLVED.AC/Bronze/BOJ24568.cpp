#include <iostream>
using namespace std;

int R, S;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> R;
    cin >> S;

    cout << (R * 8) + (S * 3) - 28;
    
    return 0;
}