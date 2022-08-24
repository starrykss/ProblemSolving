#include <iostream>
#include <string>
using namespace std;

#define SIZE 3

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string A, B;
    char tmp;
    int a, b;

    cin >> A >> B;

    // Switch the first number and the last number of the string (ABC -> CBA)
    tmp = A[0];
    A[0] = A[SIZE - 1];
    A[SIZE - 1] = tmp;

    tmp = B[0];
    B[0] = B[SIZE - 1];
    B[SIZE - 1] = tmp;

    // Make string to integer
    a = stoi(A);
    b = stoi(B);

    if (a > b) {
        cout << a << endl;
    }
    else {
        cout << b << endl;
    }

    return 0;
}