#include <iostream>
using namespace std;

int N;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    cout << int(N * 0.78) << " " << int((N * 0.8) + ((N * 0.2) * 0.78));    // 반드시 형 변환을 시켜준다!
    
    return 0;
}