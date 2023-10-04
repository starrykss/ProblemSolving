#include <iostream>
using namespace std;

#define N 10000

void d(int n);
bool check[10100] = { 0 };

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    for (int i = 1; i < N; i++) {
        d(i);
    }

    return 0;
}

void d(int n) {
    int k = n;
    int sum = 0;

    // Part I.
    // if the item of the array is '0', print its index while moving forward. 
    if (!check[k]) {
        cout << k << '\n';
    }

    check[k] = 1;    // fill the item with '1' cause it is already printed out and passed.

    // Part II.
    // calculate of the next number with 'Constructor" of Self Number.
    // 13 -> 13 + 1 + 3
    sum += k;
    while (k != 0) {
        sum += (k % 10);
        k /= 10;
    }

    // fill the item with '1' which was made by constructor of Self Number. 
    check[sum] = 1;
}