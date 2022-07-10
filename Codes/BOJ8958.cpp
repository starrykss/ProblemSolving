#include <iostream>
#include <cstring>    // strlen()
using namespace std;

#define S 80

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, count, sum;
    char cases[S];

    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> cases;
        
        sum = 0;
        count = 0;

        for (int j = 0; j < strlen(cases); j++) {
            if (cases[j] == 'O') {
                count++;
                sum += count;
            }
            else {
                count = 0;
            }
        }
        cout << sum << '\n';
    }

    return 0;
}