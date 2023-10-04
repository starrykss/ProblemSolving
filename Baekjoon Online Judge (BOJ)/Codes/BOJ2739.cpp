#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int dan;
    
    cin >> dan;
    for (int i = 1; i <= 9; i++) {
        cout << dan << " * " << i << " = " << dan * i << endl;
    }

    return 0;
}