#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int dice[3], max = 0, prize;

    for (int i = 0; i < 3; i++) {
        cin >> dice[i];
        if (max < dice[i]) {    
            max = dice[i];      // find the max value.
        }
    }

    if (dice[0] == dice[1]) {
        if (dice[1] == dice[2]) {
            prize = 10000 + dice[0] * 1000;
        }
        else {
            prize = 1000 + dice[0] * 100;
        }
    }
    else if (dice[1] == dice[2]) {
        if (dice[0] == dice[1]) {
            prize = 10000 + dice[1] * 1000;
        }
        else {
            prize = 1000 + dice[1] * 100;
        }
    }
    else if (dice[0] == dice[2]) {
        if (dice[1] == dice[2]) {
            prize = 10000 + dice[0] * 1000;
        }
        else {
            prize = 1000 + dice[0] * 100;
        }
    }
    else {
        prize = max * 100;
    }
    
    cout << prize << endl;

    return 0;
}