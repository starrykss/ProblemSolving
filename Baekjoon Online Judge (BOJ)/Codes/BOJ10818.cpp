#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int N, min, max;

    cin >> N;

    int* ary = (int*)malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++) {
        cin >> ary[i];
    }

    min = ary[0];
    max = ary[0];

    for (int i = 0; i < N; i++) {
        if (min > ary[i]) {
            min = ary[i];
        }
        if (max < ary[i]) {
            max = ary[i];
        }
    }

    cout << min << " " << max << endl;

    free(ary);

    return 0;
}