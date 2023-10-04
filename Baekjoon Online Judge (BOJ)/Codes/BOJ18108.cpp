#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    // Buddha Year = Cureent Year + 543
    int currYear, buddhaYear;
    
    cin >> buddhaYear;
    cout << buddhaYear - 543 << endl;

    return 0;
}