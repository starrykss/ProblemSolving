#include <iostream>
using namespace std;

int score[2], info[5];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 5; j++) {
            cin >> info[j];
        }
        score[i] = info[0] * 6 + info[1] * 3 + info[2] * 2 + info[3] + info[4] * 2;
    }
    for (int i = 0; i < 2; i++) {
        cout << score[i] << ' ';
    }
}