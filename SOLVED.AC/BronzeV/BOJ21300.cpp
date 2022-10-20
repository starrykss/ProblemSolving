#include <iostream>
using namespace std;

int beer, malt, wine, soda, sparkling, water;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> beer >> malt >> wine >> soda >> sparkling >> water;
    cout << (beer + malt + wine + soda + sparkling + water) * 5;
    
    return 0;
}