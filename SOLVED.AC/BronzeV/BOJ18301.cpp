#include <iostream>
using namespace std;

double n1, n2, n12;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n1 >> n2 >> n12;
    cout << (int)((((n1 + 1) * (n2 + 1)) / (n12 + 1) - 1));  // floor()
    
    return 0;
}