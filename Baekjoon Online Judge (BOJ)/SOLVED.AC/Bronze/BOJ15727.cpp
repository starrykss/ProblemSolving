#include <iostream>
#include <cmath>
using namespace std;

double L;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> L;
    cout << ceil(L / 5);

    return 0;
}