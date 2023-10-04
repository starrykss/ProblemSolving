#include <iostream>
#include <cmath>
using namespace std;

int N;

void hanoi_tower(int n, int from, int tmp, int to) {
    if (n == 1) {
        cout << from << " " << to << '\n';
    }
    else {
        hanoi_tower(n - 1, from, to, tmp);
        cout << from << " " << to << '\n';
        hanoi_tower(n - 1, tmp, from, to);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    // 하노이 탑에서 원판을 옮기는 최소 횟수 : 2^n - 1
    cout << (int)(pow(2, N)) - 1 << '\n';  
    
    hanoi_tower(N, 1, 2, 3);

    return 0;
}