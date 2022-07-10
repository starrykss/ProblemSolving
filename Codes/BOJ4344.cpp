#include <iostream>
using namespace std;

#define S 1000

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int C, N, count;
    double sum, avg, score[S];

    cin >> C;

    for (int i = 0; i < C; i++) {
        cin >> N;
        
        count = 0;
        sum = 0;

        for (int j = 0; j < N; j++) {
            cin >> score[j];
            sum += score[j];
        }

        avg = sum / N;

        for (int k = 0; k < N; k++) {
            if (score[k] > avg) {
                count++;
            }
        }
        
        avg = (double)count / N;    // from integer to double

        cout << fixed;
        cout.precision(3);    // Fix Precision

        cout << avg * 100 << "%" << '\n';
    }

    return 0;
}