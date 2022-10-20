#include <iostream>
using namespace std;

int n1, n2, k1, k2, res;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n1 >> k1 >> n2 >> k2;
    
    cout << (n1 * k1) + (n2 * k2);

    return 0;
}