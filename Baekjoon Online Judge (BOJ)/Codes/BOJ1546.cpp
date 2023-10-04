#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, M;
    double sum;

    cin >> N;

    double* score = (double*)malloc(sizeof(double) * N);
    
    for (int i = 0; i < N; i++) {
        cin >> score[i];
    }

    M = score[0];
    for (int i = 0; i < N; i++) {
        if (M < score[i]) {
            M = score[i];
        }
    }

    sum = 0.0;
    for (int i = 0; i < N; i++) {
        score[i] = score[i] / M * 100;
        sum += score[i];
    }

    cout << (sum / N) << '\n';

    free(score);

    return 0;
}