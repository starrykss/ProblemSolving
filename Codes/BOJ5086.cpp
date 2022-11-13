#include <iostream>
using namespace std;

int num1, num2;

bool isFactor(int n1, int n2) {
    if (n2 % n1 == 0) {
        return true;
    }
    return false;
}

bool isMultiple(int n1, int n2) {
    if (n1 % n2 == 0) {
        return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (1) {
        cin >> num1 >> num2;
        if (num1 == 0 && num2 == 0) {
            break;
        }
        if (isFactor(num1, num2)) {
            cout << "factor" << '\n';
        }
        else if (isMultiple(num1, num2)) {
            cout << "multiple" << '\n';
        }
        else {
            cout << "neither" << '\n';
        }
    }

    return 0;
}