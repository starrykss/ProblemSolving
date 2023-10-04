#include <iostream>
using namespace std;

int n, cntA, cntB;
int f[40];

int fib(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    else {
        cntA++;
        return fib(n - 1) + fib(n - 2);
    }
}

void fibonacci(int n) {
    f[0] = f[1] = 1;
    for (int i = 2; i < n; i++) {
        f[i] = f[i - 1] + f[i - 2];
        cntB++;
    }
}

void Input() {
    cin >> n;
}

void Output() {
    cout << cntA + 1 << " " << cntB << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Input();

    fib(n);
    fibonacci(n);
    
    Output();

    return 0;
}