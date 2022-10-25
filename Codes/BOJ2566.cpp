#include <iostream>
using namespace std;

int matrix[9][9], maxNum, x, y;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    maxNum = 0;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> matrix[i][j];
            if (maxNum < matrix[i][j]) {
                maxNum = matrix[i][j];
            }
        }
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (matrix[i][j] == maxNum) {
                x = i + 1;
                y = j + 1;
            }
        }
    }

    cout << maxNum << '\n' << x << " " << y;
    
    return 0;
}