#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int year;

    cin >> year;

    // Lunear Year
    // [1] (year % 4 == 0) && (year % 100 != 0)
    // [2] year % 400 == 0

    if ((year % 4 == 0) && (year % 100 != 0)) {
        cout << "1" << endl;
    }
    else if (year % 400 == 0) {
        cout << "1" << endl;
    }
    else {
        cout << "0" << endl;
    }

    return 0;
}