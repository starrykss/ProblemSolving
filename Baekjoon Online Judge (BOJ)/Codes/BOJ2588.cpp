#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int num1, num2;

    cin >> num1 >> num2;    // (1), (2)

    cout << num1 * (num2 % 10) << endl;             // (3)
    cout << num1 * ((num2 % 100) / 10) << endl;     // (4)
    cout << num1 * (num2 / 100) << endl;            // (5)
    cout << num1 * num2 << endl;                    // (6)

    return 0;
}