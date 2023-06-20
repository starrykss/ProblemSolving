#include <iostream>
using namespace std;

int score[101] = { 0 }, sum = 0;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 101; i++) {
        cin >> score[i];
        sum += score[i];
    }
    cout << sum;

    return 0;
}