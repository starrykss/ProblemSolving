#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int score;

    cin >> score;

    if (score >= 90) {
        cout << "A" << endl;
    }
    else if (score >= 80) {
        cout << "B" << endl;
    }
    else if (score >= 70) {
        cout << "C" << endl;
    }
    else if (score >= 60) {
        cout << "D" << endl;
    }
    else {
        cout << "F" << endl;
    }

    return 0;
}