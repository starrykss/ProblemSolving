#include <iostream>
using namespace std;

int N, num = 4;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    
    for (int i = 0; i < (N / 4); i++) {
        cout << "long ";
    }
    cout << "int";

    return 0;
}