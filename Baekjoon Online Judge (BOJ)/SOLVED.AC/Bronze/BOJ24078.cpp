#include <iostream>
using namespace std;

int X;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> X;

    cout << X % 21 << endl;
    
    return 0;
}