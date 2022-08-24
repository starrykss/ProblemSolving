#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int X, N, sum = 0;

    cin >> X >> N;

    // Dynamic Allocation
    int *price = new int[N];
    int *amount = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> price[i] >> amount[i];
        sum += price[i] * amount[i];
    }

    if (X == sum) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    free(price);
    free(amount);
    
    return 0;
}