#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, sum;

    cin >> N;
    
    char *ary = (char*)malloc(sizeof(char) * N);

    cin >> ary;

    sum = 0;
    for (int i = 0; i < N; i++) {
        sum += ary[i] - '0';
    }

    cout << sum << '\n';

    delete(ary);

    return 0;
}