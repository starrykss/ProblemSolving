#include <iostream>
using namespace std;

int N;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    cout << (N + 1) * 2 << " " << (N + 1) * 3;
    
    return 0;
}