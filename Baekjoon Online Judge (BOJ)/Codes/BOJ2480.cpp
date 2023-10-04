#include <iostream>
using namespace std;

int main() {
    int dice[3];
    int max = 0;
    int prize = 0;

    for (int i = 0; i < 3; i++) {
        cin >> dice[i];
        if (max <= dice[i]) max = dice[i];
    }

    // Case 1 : 3 same faces
    // Case 2 : 2 same faces
    // Case 3 : different faces

    if (dice[1] == dice[0]) {   // ▲ ▲ ?
        if (dice[1] == dice[2]) {   // ▲ ▲ ▲
            prize = 10000 + (dice[1] * 1000);   // Case 1
        }
        else {  // ▲ ▲ ■
            prize = 1000 + (dice[1] * 100); // Case 2
        }
    }
    else {  // ■ ▲ ?
        if (dice[1] == dice[2]) {   // ■ ▲ ▲ 
            prize = 1000 + (dice[1] * 100); // Case 2
        }
        else {  // ■ ▲ ★
            prize = max * 100;  // Case 3
        }
        if (dice[0] == dice[2]) {   // ■ ▲ ■
            prize = 1000 + (dice[0] * 100); // Case 2
        }
    }

    cout << prize << endl;

    return 0;
}