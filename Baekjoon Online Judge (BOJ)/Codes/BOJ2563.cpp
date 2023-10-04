#include <iostream>
using namespace std;

int paper[100][100] = { 0 }, N, x[100], y[100], area = 0;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 100; j++) {
            for (int k = 0; k < 100; k++) {
                int x1 = x[i];
                int x2 = x1 + 10;
                int y1 = y[i];
                int y2 = y[i] + 10;

                if (j >= x1 && j < x2) {
                    if (k >= y1 && k < y2) {
                        paper[j][k] = 1;
                    }
                }
            }
        }
    }

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (paper[i][j] == 1) {
                area++;
            }
        }
    }

    cout << area << '\n';
    
    return 0;
}