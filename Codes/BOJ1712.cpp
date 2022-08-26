#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    // A: Fixed Cost
    // B : Variable Cost
    // C : Laptop Price
    unsigned int A, B, C;

    cin >> A >> B >> C;

    // totalCost = A + (B * N);
    // totalIncome = C * N;

    // Break Even Point : N
    // C * N > A + (B * N)
    // => (C - B) * N > A
    // => N > A / (C - B)

    if (B >= C) {
        cout << "-1" << endl;
    }
    else {
        cout << (A / (C - B)) + 1 << endl;
    }
    
    return 0;
}