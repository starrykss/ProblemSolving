#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, originN, digit10, digit1, cycle;

    cin >> N;

    cycle = 0;
    originN = N;

    while (1) {
        digit10 = N / 10;
        digit1 = N % 10;
        
        N = digit10 + digit1;
        if (N < 10) {
            N = (10 * digit1) + N;
        }
        else {
            N = (10 * digit1) + (N % 10);
        }
        cycle++;

        if (N == originN) {
            break;
        }
    }

    cout << cycle << '\n';

    return 0;
}